#include "ZipCompress.h"
#include "minizip/zip.h"
#include "unZip64.h"
#include <stdio.h>
#include <string>
#include <map>
#include <assert.h>
#include <dos.h>
#include <direct.h>
#include <direct.h>
#include <io.h>

static int compress_dir(const char* rootDir, zipFile& zpFile, const char *file_in, int level)
{
    struct _finddata_t find_data;
    char file[128];
    memset(file, 0, 128);
    long lf;
    int ret = 0;
    sprintf(file,"%s%s",file_in,"/*");
    if((lf = _findfirst(file,&find_data))==-1l)    // LOOKOUT: not eleven, but one and lowercase 'L'
    {
        fprintf(stdout,"file not found. \n");
    }
    else
    {
        do
        {
            if(!strcmp(find_data.name,".") || !strcmp(find_data.name,".."))
                continue;

            zip_fileinfo fileInfo;
            memset(&fileInfo, 0, sizeof(fileInfo));
            fileInfo.dosDate = find_data.time_write;
            //fileInfo.external_fa = find_data.attrib;
            fprintf(stdout,"%s\n",find_data.name);
            sprintf(file,"%s%s%s",file_in,"/",find_data.name);
            if(find_data.attrib & _A_SUBDIR)
            {
                fprintf(stdout," ---directory--- \n");
                ret = compress_dir(rootDir, zpFile, file, level);
            }
            else
            {
                std::string tmpPath = file;
                std::string rootPath = rootDir;
                tmpPath = tmpPath.substr(rootPath.size() + 1);
                if(zipOpenNewFileInZip4(zpFile, tmpPath.c_str(), &fileInfo, NULL, 0, NULL, 0, NULL, Z_DEFLATED, level,
                    0, -MAX_WBITS, DEF_MEM_LEVEL,Z_DEFAULT_STRATEGY, NULL, 0, 0, 0x800) != ZIP_OK)
                {
                    fprintf(stdout," zipOpenNewFileInZip filed! \n");
                    continue;
                }
                char* pFileBuf = new char[find_data.size];
                FILE *fd_in = fopen(file, "rb");
                fread(pFileBuf, 1, find_data.size, fd_in);
                if(zipWriteInFileInZip(zpFile, pFileBuf, find_data.size) != ZIP_OK)
                {
                    fprintf(stdout," zipWriteInFileInZip filed! \n");
                }
                fclose(fd_in);
                delete []pFileBuf;
                zipCloseFileInZip(zpFile);
            }
        }
        while( _findnext(lf, &find_data ) == 0 );
    }
    return ret;
}

int ZipCompress::compress(const char *file_dir, const char *file_out, int compLevel)
{
    zipFile zpFile = zipOpen64(file_out, 0);
    struct _finddata_t find_data;
    int ret = 0;
    if(_findfirst(file_dir,&find_data)==-1l)    // LOOKOUT: not eleven, but one and lowercase 'L'
    {
        fprintf(stderr,"File or dir %s not found. \n",file_dir);
        return 1;
    }
    if(find_data.attrib & _A_SUBDIR)
    {
        fprintf(stdout,"Dir %s being Compressed ... ",file_dir);
        ret = compress_dir(file_dir, zpFile, file_dir, compLevel);
    }
    else
    {
    }
    if (ret != 0)
    {
        fprintf(stderr,"Compress Error !!!!!!!!!!!!!! /n");
    }
    else
        fprintf(stdout,"Compress OK--------------- /n");

    zipClose(zpFile, NULL);
    return ret;
}


#define UNZ_MAXFILENAMEINZIP 256
struct ZipEntryInfo
{
    unz_file_pos pos;
    uLong uncompressed_size;
};
typedef std::map<std::string, ZipEntryInfo> ZipPakFileList;

int ZipCompress::uncompress(const char *fileName, const char* outDir)
{
    unzFile zipFile = unzOpen(fileName);
    // UNZ_MAXFILENAMEINZIP + 1 - it is done so in unzLocateFile
    char szCurrentFileName[UNZ_MAXFILENAMEINZIP + 1];
    unz_file_info64 fileInfo;
    // go through all files and store position information about the required files
    int ret = unzGoToFirstFile64(zipFile, &fileInfo, szCurrentFileName, sizeof(szCurrentFileName) - 1);
    ZipPakFileList fileList;
    while (ret == UNZ_OK)
    {
        unz_file_pos posInfo;
        int posErr = unzGetFilePos(zipFile, &posInfo);
        if (posErr == UNZ_OK)
        {
            ZipEntryInfo entry;
            entry.pos = posInfo;
            entry.uncompressed_size = (uLong)fileInfo.uncompressed_size;
            fileList[szCurrentFileName] = entry;
        }
        // next file - also get the information about it
        ret = unzGoToNextFile64(zipFile, &fileInfo, szCurrentFileName, sizeof(szCurrentFileName) - 1);
    }

    for(ZipPakFileList::iterator it = fileList.begin();
        it != fileList.end(); ++ it)
    {
        ZipEntryInfo& fileInfo = it->second;
        ret = unzGoToFilePos(zipFile, &fileInfo.pos);
        if(UNZ_OK != ret)
        {
            assert(0 && "unzGoToFilePos failed!");
            return ret;
        }
        ret = unzOpenCurrentFile(zipFile);
        if(UNZ_OK != ret)
        {
            assert(0 && "unzOpenCurrentFile failed!");
            return ret;
        }
        unsigned char* pBuffer = new unsigned char[fileInfo.uncompressed_size];
        int size = unzReadCurrentFile(zipFile, pBuffer, fileInfo.uncompressed_size);
        if(size != (int)fileInfo.uncompressed_size)
        {
            assert(0 && "unzReadCurrentFile failed!");
            return ret;
        }
        unzCloseCurrentFile(zipFile);
        // write to file
        mkdir(outDir);
        std::string createDirTmpStr = it->first;
        std::string::size_type dirPos = createDirTmpStr.find('/');
        std::string tmpDirStr;
        while(dirPos != std::string::npos)
        {
            tmpDirStr += createDirTmpStr.substr(0, dirPos);
            createDirTmpStr = createDirTmpStr.substr(dirPos+1);
            dirPos = createDirTmpStr.find('/');
            std::string mkDir = outDir;
            mkDir.append("/");
            mkDir.append(tmpDirStr);
            mkdir(mkDir.c_str());
            tmpDirStr += "/";
        }
        std::string outFileName = outDir;
        outFileName.append("/");
        outFileName.append(it->first);
        FILE* pOutFile = fopen(outFileName.c_str(), "wb");
        fwrite(pBuffer, 1, size, pOutFile);
        fclose(pOutFile);
        delete []pBuffer;
    }

    unzClose(zipFile);
    return ret;
}
