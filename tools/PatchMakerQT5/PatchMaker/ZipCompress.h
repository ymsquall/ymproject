#ifndef PACKAGECOMPRESS_H
#define PACKAGECOMPRESS_H

#include <QObject>

class PackageCompress : public QObject
{
    Q_OBJECT
public:
    explicit PackageCompress(QObject *parent = 0);

    static int compress(const char *file_dir, const char *file_out, int compLevel = 9);
    static int uncompress(const char *fileName, const char* outDir);

signals:

public slots:

};

#endif // PACKAGECOMPRESS_H
