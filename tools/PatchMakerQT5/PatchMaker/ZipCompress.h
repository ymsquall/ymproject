#ifndef PACKAGECOMPRESS_H
#define PACKAGECOMPRESS_H

class ZipCompress
{
public:
    static int compress(const char *file_dir, const char *file_out, int compLevel = 9);
    static int uncompress(const char *fileName, const char* outDir);
};

#endif // PACKAGECOMPRESS_H
