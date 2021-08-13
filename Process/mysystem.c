
/* my own implementation of system() function.  
   int execl(const char *path, const char *arg, ... */

#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main()
{
        char command[10];
        strcpy(command,"ls -l");
        execl("/bin/sh", "sh", "-c", command, (char *) 0);
        return 0;
}
