#include "main.h"
/**
 * print_diagonal - this prints out all the letters of the alphabet
 * in order ten times
 * using a nested while loop and the putchar function
*/
void print_diagonal(int n)
{
	if (n > 0) 
	{
		int p;
		int r;

		p = 0;
		r = 0;

		while (p < n)
		{
			while (r < p)
			{
				_putchar(' ');
				r++;
			}
			r = 0;
			_putchar('\\');
			_putvhar('\n');
			p++;
		}
	}
	_putchar('\n');
}
