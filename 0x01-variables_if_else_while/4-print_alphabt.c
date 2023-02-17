#include <stdio.h>i
#include <stdlib.h>
/**
 * main - program that prints all leters in the alphabet
 * Return: Always return 0.
*/
int main(void) {
	char ch = 'a';
	    while(ch<='z')
    {
        if((ch == 'q')){
                ch++;
        putchar(ch);
        } else if ((ch == 'e')) {
            ch++;
        putchar(ch);
        }
        else{
            putchar(ch);
        }
        ch++;
    }
	putchar('\n');
	return 0;
}
