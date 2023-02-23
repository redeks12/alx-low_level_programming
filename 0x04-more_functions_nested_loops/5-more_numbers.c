#include "main.h"
/**
 * more_numbers - this prints out all the letters of the alphabet
 * in order ten times
 * using a nested while loop and the putchar function
*/
void more_numbers(void)
{
	int n,p;

	n = 0;
	p = 0;

	while (n < 10)
	{
		while (p <= 14)
		{
			_putchar(p + '0');
			p++;
		}
		p = 0;
		_putchar('\n');
		n++;
	}
}
