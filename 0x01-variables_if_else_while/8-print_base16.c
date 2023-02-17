#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints all leters in the alphabet
 * Return: Always return 0.
*/
int main(void)
{
	char i;
	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	for(i = 'a'; i <= 'f'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
