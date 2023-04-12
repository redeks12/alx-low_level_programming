#include "main.h"
#include <fcntl.h>

int create_file(const char *filename, char *text_content)
{
        int nan;

        nan = open(filename, O_CREAT | O_WRONLY | O_TRUNC , 600);

        if ((nan == -1) || (filename == NULL))
                return (-1);   
                     
        if (text_content != NULL)
                write(nan, text_content, _strlen(text_content));
        close(nan);
        return (1);
}

/**
 * _strlen - Fnction that returns the length of a string
 * @s: string to check
 * Return: 0 (Success)
 */

int _strlen(char *s)
{
	int length = 0;

	for (; *s++;)
		length++;
	return (length);
}