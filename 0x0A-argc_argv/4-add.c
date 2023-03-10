#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - Prints the program name, followed by a new line.
 * @argc : first argument
 * @*argv[] : second argument
 * return : 0
 */
int main(int argc, char *argv[])
{
	int i;
	int num;
	int sum = 0;

	if (argc == 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		num = atoi(argv[i]);
		if (isdigit(num))
		{
			sum+= num;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
