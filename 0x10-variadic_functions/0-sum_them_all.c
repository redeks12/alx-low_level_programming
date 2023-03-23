#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...)
{
        if (n == 0)
                return (0);

        va_list args;
        va_start(args, n);

        int i;
        int s = 0;

        for (i = 0; i < n; i++)
        {
                int x = va_arg(args, int);
                s += x;
        }
        va_end(args);
        return (s);
}
