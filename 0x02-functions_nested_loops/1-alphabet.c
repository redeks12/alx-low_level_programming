#include "main.h"
/**
 * main - program that prints all leters in the alphabet
 * Return: Always return 0.
*/
void print_alphabet(void)
{
	char a = 'a';
	while(a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
