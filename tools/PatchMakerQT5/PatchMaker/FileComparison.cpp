#include "FileComparison.h"
#include "helper.h"

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
    mOldRootPath = oldPath.mid(pos1+1);
    mNewRootPath = newPath.mid(pos2+1);
    mOldRootFullPath = oldPath + '/';
    mNewRootFullPath = newPath + '/';
    mOldFileList = Helper::getAllFilesInPath(oldPath);
    mNewFileList = Helper::getAllFilesInPath(newPath);
}

const FileCompResultList& FileComparison::comparison()
{
    while(mOldFileList.size() > 0)
    {
        bool finded = false;
        QStringList cloneOldList = mOldFileList;
        for(int j = 0; j < mNewFileList.size();)
        {
            if(mNewFileList[j] == "filelist")
            {
                int id = 0;
            }
            if(mOldFileList[0] == mNewFileList[j])
            {
                QString name1MD5 = Helper::getFileMd5(mOldRootFullPath + mOldFileList[0]);
                QString name2MD5 = Helper::getFileMd5(mNewRootFullPath + mNewFileList[j]);
                name1MD5 = name1MD5.toUpper();
                name2MD5 = name2MD5.toUpper();
                FileCompResultType sameType = FileCompResultType::None;
                if(name1MD5 != name2MD5)
                    sameType = FileCompResultType::Modify;
                FileCompResult compResult = FileCompResult{ mOldFileList[0], name1MD5, name2MD5, sameType };
                mCompResultList.append(compResult);
                mNewFileList.removeAt(j);
                finded = true;
                break;
            }
            bool addFinded = false;
            for(int i = 0; i < cloneOldList.size(); ++ i)
            {
                if(cloneOldList[i] == mNewFileList[j])
                {
                    addFinded = true;
                    break;
                }
            }
            if(!addFinded)
            {
                QString name2MD5 = Helper::getFileMd5(mNewRootFullPath + mNewFileList[j]);
                name2MD5 = name2MD5.toUpper();
                FileCompResult compResult = FileCompResult{ mNewFileList[j], "", name2MD5, FileCompResultType::Added };
                mCompResultList.append(compResult);
                mNewFileList.removeAt(j);
            }
            else
                 ++ j;
        }
        if(!finded)
        {
            QString name1MD5 = Helper::getFileMd5(mOldRootFullPath + mOldFileList[0]);
            name1MD5 = name1MD5.toUpper();
            FileCompResult compResult = FileCompResult{ mOldFileList[0], name1MD5, "", FileCompResultType::Removed };
            mCompResultList.append(compResult);
        }
        mOldFileList.removeAt(0);
    }
    return mCompResultList;
}
