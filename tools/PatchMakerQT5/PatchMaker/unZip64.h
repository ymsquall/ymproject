#ifndef UNZIP64_H
#define UNZIP64_H

#include "minizip/unzip.h"



int unzGoToFirstFile64 (unzFile file,
                        unz_file_info64 *pfile_info,
                        char *szFileName,
                        uLong fileNameBufferSize);

int unzGoToNextFile64 (unzFile file,
                       unz_file_info64 *pfile_info,
                       char *szFileName,
                       uLong fileNameBufferSize);

#endif // UNZIP64_H
