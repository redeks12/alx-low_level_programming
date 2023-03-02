#include "main.h"
#include <stdio.h>
#include <string.h>
/*
 * _strcat - this function takes in 2 arguments and joins them together
 * @dest - fist argument
 * @src - second argument
 */
char *_strcat(char *dest, char *src)
{
	int i; 

	int j = length(dest);

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i + j] = src[i];
	}
	dest[i + j] = '\0';

	return (dest);
}
