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
			if (p < 10)
			{
				_putchar(1 + '0');
			}
			_putchar((p % 10) + '0');
			p++;
		}
		_putchar('\n');
		p = 0;
		n++;
	}
}
