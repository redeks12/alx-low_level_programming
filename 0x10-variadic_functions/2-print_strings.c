#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

void print_strings(const char *separator, const unsigned int n, ...)
{
        va_list args;
        unsigned int i;
        char *x;
        
        if (separator == NULL)
                return;

        va_start(args, n);

        for (i = 0; i < n ; i++)
        {
                x = va_arg(args, char*);
                if (x != NULL)
                        printf("%s", x);
                else
                        printf("(nil)");
                if ((i != n - 1) && (separator != NULL))
                        printf("%c ", *(separator));

        }
        printf("\n");
        va_end(args);
}