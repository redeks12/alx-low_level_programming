#include <stdio.h>
/**
 * main - Prints the program name, followed by a new line.
 * @argc : first argument
 * @*argv[] : second argument
 * return : 0
 */
int main(int argc, int *argv[])
{
	if (argc == 2)
	{
		printf("%d\n", *argv[0] * *argv[1]);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
