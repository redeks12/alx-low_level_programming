#include "main.h"
/**
 * print_square - this prints out all the letters of the alphabet
 * in order ten times
 * using a nested while loop and the putchar function
*/
void print_square(int size)
{
	int n, r;

	n = 0;
	r = 0;

	if (size > 0)
	{
		while (n < size)
		{
			while (r < size)
			{
				_putchar('#');
				r++;
			}
			_putchar('\n');
			r = 0;
			n++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
