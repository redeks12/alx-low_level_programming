#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#define BUFFER_SIZE 1024

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
    int first, r;
    int second;
    char buff[BUFFER_SIZE];

    if (ac != 3)
    {
        fprintf(stderr, "Usage: cp %s %s\n", av[1], av[2]);
        exit(97);
    }

    first = open(av[1], O_RDONLY);
    r = read(first, buff, BUFFER_SIZE);
    buff[r] = '\0';
    close(first);

    second = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 664);
    write(second, buff, r);
    close(second);



    return (0);
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
