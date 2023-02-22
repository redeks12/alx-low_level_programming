#include "main.h"
/**
 * print_alphabet_x10 - this prints out all the letters of the alphabet
 * in order ten times
 * using a nested while loop and the putchar function
*/
void jack_bauer(void)
{
	int i;
	int j;

	for (i = 0; i <= 24; i++)
	{
		for (j = 0; j <= 60; j++)
		{
			if (i < 10)
			{
				_putchar(0);
			}
			_putchar(i);
			_putchar(':');
			if (j < 10)
				_putchar(0);
			_putchar(j);
		}
	}
}
