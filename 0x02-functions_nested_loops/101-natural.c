#include "main.h"
#include <stdio.h>
/**
 * print_all - a function that prints all natural numbers 1024
 * that are divisible by 3 or 5
 * user input's number prints to 98, regardless < 98 or > 9
 */
void print_all(void)
{
	int n = 0;
	int j = 0;

	while (n < 1024)
	{
		if(n % 3 == 0 || n % 5 == 0)
		{
			j+= n;
		}
		n++;
	}
	printf("%d",j);
	printf("\n");
}
