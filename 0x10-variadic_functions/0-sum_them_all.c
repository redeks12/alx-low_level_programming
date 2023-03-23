#include "variadic_functions.h"
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...)
{
        va_list args;
        unsigned int i;
        int s = 0;
        
        if (n == 0)
                return (0);

        va_start(args, n);


        for (i = 0; i < n; i++)
        {
                s += va_arg(args, int);
        }
        va_end(args);

        return (s);
}
