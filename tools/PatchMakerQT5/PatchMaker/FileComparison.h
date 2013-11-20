#ifndef FILECOMPARISON_H
#define FILECOMPARISON_H

#include <QObject>
#include <QStringList>
#include "helper.h"

enum class FileCompResultType : char
{
    None = 0,
    Modify = 1,
    Removed = 2,
    Added = 3
};
struct FileCompResult
{
    FileCompResult(const QString& file, const QString& md5_1, const QString& md5_2, FileCompResultType type)
    {
        fileName = file;
        file1MD5 = md5_1;
        file2MD5 = md5_2;
        resultType = type;
    }
    QString to1String() const
    {
        return fileName + "\t\t[" + file1MD5 + "]";
    }
    QString to2String() const
    {
        return fileName + "\t\t[" + file2MD5 + "]";
    }

    QString fileName;
    QString file1MD5;
    QString file2MD5;
    FileCompResultType resultType;
};

typedef QList<FileCompResult> FileCompResultList;

class FileComparison : public QObject
{
    Q_OBJECT
public:
    explicit FileComparison(QObject *parent = 0);

    const FileCompResultList& scanAndComp(const QString& oldPath, const QString& newPath);
    void clear();

    const QString& oldPathName();
    const QString& newPathName();

private:
    void scanFileWithPath(const QString& oldPath, const QString& newPath);
    const FileCompResultList& comparison();

signals:

public slots:

private:
    QString mOldRootPath;
    QString mNewRootPath;
    QString mOldRootFullPath;
    QString mNewRootFullPath;
    QList<FileMD5> mOldFileList;
    QList<FileMD5> mNewFileList;
    FileCompResultList mCompResultList;
};

#endif // FILECOMPARISON_H
