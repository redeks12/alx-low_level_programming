#include "main.h"
/*
 * _memset - function takes fills n amt
 * @s - first str
 * @b - second str
 * @n - integer
 * return - s*/
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
