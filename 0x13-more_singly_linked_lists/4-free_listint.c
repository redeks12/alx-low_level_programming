#include "lists.h"


void free_listint(listint_t *head)
{
        listint_t *temp;
        listint_t *temp2;
        temp = head;

        if (temp == NULL)
        {
                return;
        }
        
        while (temp != NULL)
        {
                temp2 = temp;
                temp = temp->next;
                free(temp2);
        }
        free(temp);
}