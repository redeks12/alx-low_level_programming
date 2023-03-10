#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints the program name, followed by a new line.
 * @argc : first argument
 * @*argv[] : second argument
 * return : 0
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[0]) * atoi(argv[1]));
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
