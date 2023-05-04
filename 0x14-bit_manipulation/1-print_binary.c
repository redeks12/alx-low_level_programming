#include "main.h"
/**
 * print_binary - print out the binary representation of a number
 * @n: number to print
 */
void print_binary(unsigned long int n)
{
	unsigned long int i, longintsize, tmpn;
	int flag;
	char num;

	longintsize = sizeof(n) * 8 - 1;
	for (i = 0, flag = 0; i <= longintsize; i++)
	{
		tmpn = (n << i) >> longintsize;
		if (!flag && tmpn == 1)
			flag = 1;
		if (flag)
		{
			num = tmpn + '0';
			_putchar(num);
		}
	}
	if (n == 0)
		_putchar('0');
}
