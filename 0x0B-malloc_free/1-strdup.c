#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/*
 * *_strdup : function creates an array
 * @str: first arg
 * return: array */
char *_strdup(char *str)
{
        char *arr = malloc(sizeof(char) * (sizeof(str)/sizeof(str[0])));
        
        if (str == NULL) return NULL;
        arr = str;
        return arr;
}