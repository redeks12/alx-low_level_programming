#include "main.h"
#include <unistd.h>

ssize_t read_textfile(const char *filename, size_t letters)
{
        size_t i = 0;
        char bo[50];
        FILE *nan;
        if (filename == NULL)
                return (0);
        nan = fopen(filename,"r");
        while (!feof(nan) && i != letters)
        {        
                fgets(bo, 50, nan);
                printf("%s",bo);
                i++;
        }
        fclose(nan);
        return (letters);
}