#include "lists.h"

size_t print_listint(const listint_t *h)
{
        size_t num = 0;
        
        while (h != NULL)
        {
                num++;
                printf("%d\n",h->n);
                h = h->next;
        }

        return (num);
}