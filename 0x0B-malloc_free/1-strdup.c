#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/*
 * *_strdup : function creates an array
 * @str: first arg
 * return: array */
char *_strdup(char *str)
{
        if (str == NULL) return NULL;
        char *arr = malloc(sizeof(str) + 1);
        
        arr = str;
        return arr;
}