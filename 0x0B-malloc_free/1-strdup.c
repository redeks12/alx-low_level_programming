#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly-allocated space in memory
 *           containing a copy of the string given as parameter.
 * @str: The string to be copied.
 *
 * Return: If str == NULL or insufficient memory is available - NULL.
 *         Otherwise - a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	char *arr;
	int i, b = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		b++;

	arr = malloc(sizeof(char) * (b + 1));

	if (arr == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		arr[i] = str[i];

	arr[b] = '\0';

	return (arr);
}