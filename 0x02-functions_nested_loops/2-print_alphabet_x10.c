#include "main.h"
/**
 * print_alphabet_x10 - this prints out all the letters of the alphabet
 * in order ten times
 * using a nested while loop and the putchar function
*/
void print_alphabet_x10(void)
{
	char i = 0;

	while (i < 10)
	{
		char a = 'a';

		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		i++;
		_putchar('\n');
	}
}
