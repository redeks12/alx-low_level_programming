#include <stdio.h>
#include "main.h"
/**
 * fibonacci -  a function that prints out the sum of all even numbers in fibonacci spiral
 * @n - is the number that is being multiplied
 * rone = row, cone = column, d = digits of current result
 * Return: times table
 */
void fibonacci(void)
{
	int rone, k,sum = 0;
	int i = 1;
	int j = 2;

	while(k < 4000000)
	{
		k = i + j;
		j = k;
		i = j;
		if (k % 2 == 0)
		{
			sum+= k;
		}
	}
	printf("%d", sum + 2);
}
