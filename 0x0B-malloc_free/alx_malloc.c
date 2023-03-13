#include <stdio.h>
#include <stdlib.h>
#include "main.h"

char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int main(void)
{
        // int num = 25;

        // char *arr = create_array(num, 'f');
        // int i;
        // if(!arr)
        //         printf("not allocated");
        // for(i = 0; i < num; i++)
        //         printf("arr[%d] = 0x%02x\n", i, *(arr + i));

        char *s;
        // s = _strdup("");
        s = _strdup("Holberton School!");;
        printf("%s\n", s);
        return (0);        
}

char *str_concat(char *s1, char *s2)
{
        int i, j;
        if (!s1 || !s2) return NULL;
        char *arr = malloc(sizeof(char));
        for (i = 0; s1[i] != '\0'; i++);
        // for (j = 0; s2[j] != '\0'; j++)
        // {
        //         s1[i + j] = s2[j]; 
        // }
        //         arr = s1;

        return s2;

}