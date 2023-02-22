#include "main.h"
/**
 * print_alphabet_x10 - this prints out all the letters of the alphabet
 * in order ten times
 * using a nested while loop and the putchar function
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n < 0)
	{
		_putchar('-');
		return (-1);
	} else 
	{
		_putchar('0');
		return (0);
	}

}
