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
    int first,wrote, r;
    int second;
    char buff[BUFFER_SIZE];

    if (ac != 3)
    {
        fprintf(stderr, "Usage: cp file_from file_to");
        exit(97);
    }
    first = open(av[1], O_RDONLY);
    if (first == -1)
    {
        fprintf(stderr, "error: %s", av[1]);
        exit(98);
    }
    
    second = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 664);        

    if (second == -1)
    {
        fprintf(stderr, "Error: Can't write to %s", av[2]);
        exit(99);
    }
    do
    {    
        r = read(first, buff, BUFFER_SIZE);
        if (r == -1)
        {
            fprintf(stderr, "error");
            exit(98);
        }
        

       wrote = write(second, buff, r);
        if (wrote == -1)
        {
            fprintf(stderr, "Error: Can't write to %s", av[2]);
            exit(99);
        }
    } while (r > 0);
    
    buff[r] = '\0';

    if (close(second) > 0)
    {
        fprintf(stderr, "Error: Can't write to %s", av[2]);
        exit(100);
    }
     if (close(first) > 0)
    {
        fprintf(stderr, "Error: Can't write to %s", av[1]);
        exit(100);
    }

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
