#include "main.h"
/**
 * print_line - this prints out all the letters of the alphabet
 * in order ten times
 * using a nested while loop and the putchar function
*/
void print_line(int n)
{
	int p;

	p = 0;

	while (p < n)
	{
		if (n > 0)
		{
			_putchar('_');
		}
		p++;
	}
	_putchar('\n');
}
