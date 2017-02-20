#include "pthread-windows.h"
#include <io.h>
#include <fcntl.h>
int pipe(int filedescs[2]) 
{
    _pipe(filedescs, 2048, O_BINARY);
    return 0;
}

