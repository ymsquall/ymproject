#include "helper.h"
#include <QFile>
#include <QCryptographicHash>
#include <QDir>
#include <QtDebug>

static void enumFiles(QString path, QStringList& retList)
{
    QDir dir(path);
    dir.setFilter(QDir::Files|QDir::Dirs);
    QFileInfoList fileInfos = dir.entryInfoList();
    for(int i = 0; i < fileInfos.size(); ++ i)
    {
        QString fileName = fileInfos[i].fileName();
        QString filePath = fileInfos[i].filePath();
        if(fileName == "." || fileName == "..")
        {
            qDebug() << "is not file or dirs[" << fileName << "]!";
            continue;
        }
        if(fileInfos[i].isDir())
        {
            qDebug() << "finded a dir[" << fileName << "], enums";
            enumFiles(filePath, retList);
        }
        else
        {
            qDebug() << "finded a file[" << fileName << "], add to list";
            retList << filePath;
        }
    }
}

QStringList& Helper::getAllFilesInPath(QString rootPath)
{
    static QStringList retList;
    retList.clear();
    enumFiles(rootPath, retList);
    return retList;
}

QByteArray Helper::getFileMd5(QString filePath)
{
    QFile localFile(filePath);

     if (!localFile.open(QFile::ReadOnly))
     {
         qDebug() << "file open error.";
         return 0;
     }

     QCryptographicHash ch(QCryptographicHash::Md5);

     quint64 totalBytes = 0;
     quint64 bytesWritten = 0;
     quint64 bytesToWrite = 0;
     quint64 loadSize = 1024 * 4;
     QByteArray buf;

     totalBytes = localFile.size();
     bytesToWrite = totalBytes;

     while (1)
     {
         if(bytesToWrite > 0)
         {
             buf = localFile.read(qMin(bytesToWrite, loadSize));
             ch.addData(buf);
             bytesWritten += buf.length();
             bytesToWrite -= buf.length();
             buf.resize(0);
         }
         else
         {
             break;
         }

         if(bytesWritten == totalBytes)
         {
             break;
         }
     }

     localFile.close();
     QByteArray md5 = ch.result();
     return md5;
}
