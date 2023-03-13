#include <stdio.h>
#include <stdlib.h>
#include "main.h"

char *create_array(unsigned int size, char c)
{
        int i;
        if (!size) return NULL;
        char *arr = malloc(sizeof(char) * size);

        for(i = 0; i < size; i++)
                *(arr + i) = c;

        return arr;
}