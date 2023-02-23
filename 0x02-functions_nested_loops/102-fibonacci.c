#include <stdio.h>
#include "main.h"
/**
 * fibonacci -  a function that prints the first 50 numberss, starting with 1
 * @n - is the number that is being multiplied
 * rone = row, cone = column, d = digits of current result
 * Return: times table
 */
void fibonacci(void)
{
		int rone, k;
		int i = 1;
		int j = 2;

		printf("%d, %d, ", i,j);
		for (rone = 0; rone < 48; rone++)
		{
			k = i + j;
			printf("%d",k);
			i = j;
			j = k;
			if(rone < 47)
				printf(", ");
		}
}
