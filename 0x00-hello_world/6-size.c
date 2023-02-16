#include <stdio.h>
/**
 * main - program that prints the size of various types of bytes
 *
 * Return: Always return 0.
*/
int main(void)
{
    	int a;
	float b;
    	char c;
    	long int d;
    	long long int e;
    	printf("Size of a long int: %d byte(s)\n", sizeof(int));
    	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of a float: %d byte(s)\n", sizeof(float));
	printf("Size of a long int: %d byte(s)\n", sizeof(long int));
       	printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
    	return (0);
}
