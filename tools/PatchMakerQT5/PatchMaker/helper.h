#ifndef HELPER_H
#define HELPER_H

#include <QObject>
#include <QByteArray>

class Helper : public QObject
{
    Q_OBJECT
public:
    static QStringList& getAllFilesInPath(QString filePath);
    static QByteArray getFileMd5(QString filePath);
};

#endif // HELPER_H
