#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints all leters in the alphabet
 * Return: Always return 0.
*/
int main(void) {
	char ch = 'z';
	       while(ch>='a')
    {
        putchar(ch);
        ch--;
    }
	putchar('\n');
	return 0;
}
