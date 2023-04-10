#include "main.h"
#include <fcntl.h>
int create_file(const char *filename, char *text_content)
{
        int nan;
        nan = open(filename, O_CREAT | O_TRUNC | O_RDWR, 600);

        if ((nan == -1) || (filename == NULL))
                return (-1);        
        if (text_content != NULL)
                write(nan, text_content, strlen(text_content));
        close(nan);
}
