#include <stdio.h>
/**
 * main - Prints the program name, followed by a new line.
 * @argc : first argument
 * @*argv[] : second argument
 * return : 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
