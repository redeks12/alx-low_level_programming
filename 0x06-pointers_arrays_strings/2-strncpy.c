#include "main.h"
#include <stdio.h>
/*
 * _strncpy - takes in 3 arguments and copies the 2 to first one
 * @dest - first arguments 
 * @src - second argument
 * @n - third argument
 * return - returns first argument */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, e = 0;

	while (src[i++])
		e++;

	for (i = 0; src[i] && i < n; i)
		dest[i] = src[i];

	for (i = e; i < n; i)
		dest[i] = '\0';

	return (dest);
}
