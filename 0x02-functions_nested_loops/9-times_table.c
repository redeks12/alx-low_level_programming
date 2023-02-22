#include "main.h"
/**
 * print_alphabet_x10 - this prints out all the letters of the alphabet
 * in order ten times
 * using a nested while loop and the putchar function
*/
void times_table(void)
{
	int i,j,k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			k = i * j;
			_putchar(k);
			_putchar(',');
			_putchar(' ');
		}
		putchar('\n');
	}
}
