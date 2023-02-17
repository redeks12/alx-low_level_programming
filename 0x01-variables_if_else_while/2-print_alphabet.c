#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints all leters in the alphabet
 * Return: Always return 0.
*/
int main(void) {
	char ch = 'a';
	while(ch<='z')
	{
		putchar(ch);
		ch++;
	}
	return 0;
}
