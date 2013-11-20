#ifndef HELPER_H
#define HELPER_H

#include <QObject>
#include <QByteArray>

struct FileMD5
{
    QString fileName;
    QString fileMD5;
};

class Helper : public QObject
{
    Q_OBJECT
public:
    static QList<FileMD5>& getAllFilesInPath(QString filePath);
    static QByteArray getFileMd5(QString filePath);
};

#endif // HELPER_H
