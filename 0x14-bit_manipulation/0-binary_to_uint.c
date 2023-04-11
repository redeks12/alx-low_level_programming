#include "main.h"

unsigned int binary_to_uint(const char *b)
{
        unsigned int num = atoi(b);
        unsigned int dec_value = 0;
        
        unsigned int base = 1;
        unsigned int temp = num;

        if (num == 0)
        {
                return (0);
        }
        while (*b) if (isdigit(*b++) == 0) return (0);

        while (temp) 
        {
                int last_digit = temp % 10;
                temp = temp / 10;
        
                dec_value += last_digit * base;
  
                base = base * 2;
        }
        return dec_value;

}