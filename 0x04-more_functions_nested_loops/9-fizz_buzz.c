#include "main.h"
#include <stdio>
/*
 * main - function prints out 1 - 100 but with a twist
 * return 0 */

int main(void)
{
	int i;

	i = 0;
	while (i < 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 5 = 0)
		{
			printf("Buzz");
		}
		else if (i % 3 = 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%d", i);
		}
		_putchar(' ');
	}
	_putchar('\n');

	return (0);
}
