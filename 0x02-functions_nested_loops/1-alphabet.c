#include "main.h"
/**
 * this prints out all the letters of the alphabet in order
 * using a while loop and the putchar function
 * 
*/
void print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
