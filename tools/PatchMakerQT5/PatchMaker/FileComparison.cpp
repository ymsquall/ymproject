#include "FileComparison.h"
#include <QDir>
#include <QtDebug>

FileComparison::FileComparison(QObject *parent) :
    QObject(parent)
{
}

const FileCompResultList& FileComparison::scanAndComp(const QString& oldPath, const QString& newPath)
{
    this->scanFileWithPath(oldPath, newPath);
    return this->comparison();
}

void FileComparison::clear()
{
    mOldFileList.clear();
    mNewFileList.clear();
    mCompResultList.clear();
}

const QString& FileComparison::oldPathName()
{
    return mOldRootPath;
}

const QString& FileComparison::newPathName()
{
    return mNewRootPath;
}

void FileComparison::scanFileWithPath(const QString& oldPath, const QString& newPath)
{
    int pos1 = oldPath.lastIndexOf('/');
    int pos2 = newPath.lastIndexOf('/');
    if(pos1 == -1 || pos2 == -1)
    {
        mOldRootPath = "";
        mNewRootPath = "";
        return;
    }
    mOldRootPath = oldPath.mid(pos1+1);
    mNewRootPath = newPath.mid(pos2+1);
    mOldRootFullPath = oldPath + '/';
    mNewRootFullPath = newPath + '/';
    // 先查找有无版本MD5文件，如果有说明以前扫描过，直接通过MD5文件获取文件列表和文件MD5码
    QString nowWorkPath = QDir::currentPath();
    QString oldMD5FileFullPath = nowWorkPath + "/MD5List/" + mOldRootPath + ".md5";
    QString newMD5FileFullPath = nowWorkPath + "/MD5List/" + mNewRootPath + ".md5";
    QFile oldMD5File(oldMD5FileFullPath);
    if(oldMD5File.exists() && oldMD5File.open(QIODevice::ReadOnly))
    {
        QString fileBuff = oldMD5File.readAll();
        QList<QString> lines = fileBuff.split("\r\n");
        for(int i = 0; i < lines.size(); ++ i)
        {
            QString fileStr = lines[i].mid(lines[i].indexOf(oldPath) + 1);
            QList<QString> fileInfo = fileStr.split("\t");
            if(fileInfo.size() == 2)
            {
                FileMD5 fileMD5;
                fileMD5.fileName = fileInfo[0];
                fileMD5.fileMD5 = fileInfo[1];
                mOldFileList << fileMD5;
            }
        }
        oldMD5File.close();
    }
    else
    {
        QDir checkDir(mOldRootFullPath);
        if(!checkDir.exists())
        {
            mOldRootPath = "";
            mNewRootPath = "";
            return;
        }
        mOldFileList = Helper::getAllFilesInPath(oldPath);
    }
    QFile newMD5File(newMD5FileFullPath);
    if(newMD5File.exists() && newMD5File.open(QIODevice::ReadOnly))
    {
        QString fileBuff = newMD5File.readAll();
        QList<QString> lines = fileBuff.split("\r\n");
        for(int i = 0; i < lines.size(); ++ i)
        {
            QString fileStr = lines[i].mid(lines[i].indexOf(oldPath) + 1);
            QList<QString> fileInfo = fileStr.split("\t");
            if(fileInfo.size() == 2)
            {
                FileMD5 fileMD5;
                fileMD5.fileName = fileInfo[0];
                fileMD5.fileMD5 = fileInfo[1];
                mNewFileList << fileMD5;
            }
        }
        newMD5File.close();
    }
    else
    {
        QDir checkDir(mNewRootFullPath);
        if(!checkDir.exists())
        {
            mOldRootPath = "";
            mNewRootPath = "";
            return;
        }
        mNewFileList = Helper::getAllFilesInPath(newPath);
    }
}

const FileCompResultList& FileComparison::comparison()
{
    while(mOldFileList.size() > 0)
    {
        bool finded = false;
        QList<FileMD5> cloneOldList = mOldFileList;
        for(int j = 0; j < mNewFileList.size();)
        {
            if(mNewFileList[j].fileName == "filelist")
            {
                int id = 0;
            }
            if(mOldFileList[0].fileName == mNewFileList[j].fileName)
            {
                FileCompResultType sameType = FileCompResultType_None;
                if(mOldFileList[0].fileMD5 != mNewFileList[j].fileMD5)
                    sameType = FileCompResultType_Modify;
                FileCompResult compResult(mOldFileList[0].fileName, mOldFileList[0].fileMD5, mNewFileList[j].fileMD5, sameType);
                mCompResultList.append(compResult);
                mNewFileList.removeAt(j);
                finded = true;
                break;
            }
            bool addFinded = false;
            for(int i = 0; i < cloneOldList.size(); ++ i)
            {
                if(cloneOldList[i].fileName == mNewFileList[j].fileName)
                {
                    addFinded = true;
                    break;
                }
            }
            if(!addFinded)
            {
                FileCompResult compResult(mNewFileList[j].fileName, "", mNewFileList[j].fileMD5, FileCompResultType_Added);
                mCompResultList.append(compResult);
                mNewFileList.removeAt(j);
            }
            else
                 ++ j;
        }
        if(!finded)
        {
            FileCompResult compResult(mOldFileList[0].fileName, mOldFileList[0].fileMD5, "", FileCompResultType_Removed);
            mCompResultList.append(compResult);
        }
        mOldFileList.removeAt(0);
    }
    while(mNewFileList.size() > 0)
    {
        FileCompResult compResult(mNewFileList[0].fileName, "", mNewFileList[0].fileMD5, FileCompResultType_Added);
        mCompResultList.append(compResult);
        mNewFileList.removeAt(0);
    }
    return mCompResultList;
}
