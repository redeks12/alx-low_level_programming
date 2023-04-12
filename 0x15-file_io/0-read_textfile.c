#include "main.h"
#include <unistd.h>
#include <fcntl.h>

ssize_t read_textfile(const char *filename, size_t letters)
{
        ssize_t b;
        int fd, wrote;
        char buff[1024];
        if (!filename || !letters)
                return (0);
        fd = open(filename, O_RDONLY);
        if (fd == -1)
                return (-1);
        b = read(fd, buff, letters);
        if (b == -1)
                return (-1);
        buff[b] = '\0';
        wrote = write(STDOUT_FILENO, buff, b);
        if (wrote != b)
                return (0);
        close(fd);
        return (b);
}