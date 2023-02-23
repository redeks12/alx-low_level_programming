#include "main.h"
/**
 * _isupper - a function that checks for lowercase character
 * @c: single letter input
 * Return: 1 if int c is lowercase, 0 if otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
