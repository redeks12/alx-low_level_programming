#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

void print_numbers(const char *separator, const unsigned int n, ...)
{
        va_list args;
        unsigned int i;
        
        if (separator == NULL)
                return;

        va_start(args, n);

        for (i = 0; i < n ; i++)
        {
                printf("%d", va_arg(args, int));
                if (i != n - 1)
                        printf("%c ", *(separator));

        }
        printf("\n");
        va_end(args);
}