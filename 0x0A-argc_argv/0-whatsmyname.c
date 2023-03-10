#include <stdio.h>
/*
 * main - prints arguments
 * @argc : first argument
 * @*argv[] : second argument
 * return : 0
 */
int main(int argc, char *argv[])
{
	printf("%s", argv[argc - 1]);
	return (0);
}
