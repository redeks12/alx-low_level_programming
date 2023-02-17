#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that prints all leters in the alphabet
 * Return: Always return 0.
*/
int main(void) {
	int i;
	    for(i = 48; i <= 57; i++){
        putchar(i);
        putchar(',');
        putchar(' ');
    }
	putchar('\n');
	return 0;
}
