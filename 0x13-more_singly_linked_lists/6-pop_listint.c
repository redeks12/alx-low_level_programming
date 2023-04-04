#include "lists.h"

int pop_listint(listint_t **head)
{
        int a;
        listint_t *temp;
        if (*head == NULL)
        {
                return (0);
        }        
        

        temp = *head;
        a = temp->n;
        *head = temp->next;

        free(temp);
        return(a);
}
