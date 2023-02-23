#include "main.h"
/**
 * _isdigit - a function that checks for lowercase character
 * @c: single letter input
 * Return: 1 if int c is lowercase, 0 if otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
