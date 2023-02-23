#include "main.h"
/**
 * print_most_numbers - this prints out all the letters of the alphabet
 * in order ten times
 * using a nested while loop and the putchar function
*/
void print_most_numbers(void)
{
	int n;

	n = 0;

	while (n < 9)
	{
		if (n == 2 || n == 4)
		{
			n++;
		}
		_putchar(n + '0');
		n++;
	}
	_putchar('\n');
}
