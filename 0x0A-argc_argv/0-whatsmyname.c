#include <stdio.h>
/**
 * main - Prints the program name, followed by a new line.
 * @argc : first argument
 * @*argv[] : second argument
 * return : 0
 */
int main(int argc, char *argv[])
{
	printf("%s", argv[argc - 1]);
	return (0);
}
