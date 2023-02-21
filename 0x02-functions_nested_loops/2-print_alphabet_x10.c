#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - program that prints all leters in the alphabet
 * Return: Always return 0.
*/
void print_alphabet_x10(void);
int main(void){

        print_alphabet_x10();
        return (0);
}


void print_alphabet_x10(void)
{
        int i = 0;

        while(i <= 10)
        {
            char a = 'a';
             while(a <= 'z');
             {
                 putchar(a);
                 a++;
             }
             i++;
             putchar('\n');
        }
}

