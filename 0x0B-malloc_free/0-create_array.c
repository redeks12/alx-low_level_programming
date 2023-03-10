#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/*
 * *create_array - function creates an array
 * @size: first arg
 * @c: second arg
 * return: array */
char *create_array(unsigned int size, char c)
{
        unsigned int i;
        char *arr = malloc(sizeof(char) * size);

        if (size == 0) return NULL;
        for(i = 0; i < size; i++)
                *(arr + i) = c;
        if (arr == NULL) return NULL;
        return arr;
}