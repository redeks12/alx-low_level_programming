#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/*
 * *_strdup : function creates an array
 * @str: first arg
 * return: array */
char *_strdup(char *str)
{
        int i = 1;
        char *arr = malloc(sizeof(str) + i);
        
        if (str == NULL) return NULL;
        arr = str;
        return arr;
}