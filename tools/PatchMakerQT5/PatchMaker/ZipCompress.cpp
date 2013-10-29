#include "ZipCompress.h"
#include "minizip/zip.h"
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <dos.h>
#include <direct.h>
#include <QDir>
#include <QDebug>

/* compress or decompress from stdin to stdout */
static int compress_dir(const char* rootDir, zipFile& zpFile, const char *file_in, int level)
{
    struct _finddata_t find_data;
    char file[128];
    memset(file, 0, 128);
    long lf;
    int ret;
    sprintf(file,"%s%s\0",file_in,"/*");
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
            sprintf(file,"%s%s%s\0",file_in,"/",find_data.name);
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
    return 0;
}

int PackageCompress::compress(const char *file_dir, const char *file_out, int compLevel)
{
    zipFile zpFile = zipOpen64(file_out, 0);
    struct _finddata_t find_data;
    int ret;
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
}

int PackageCompress::uncompress(const char *fileName, const char* outDir)
{
    FILE *fd_in = fopen(fileName,"rb+");
}
