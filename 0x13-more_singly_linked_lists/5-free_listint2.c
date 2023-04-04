#include "lists.h"


void free_listint2(listint_t **head)
{
        listint_t *temp;
        listint_t *temp2;
        temp = *head;

        if (temp == NULL)
        {
                *head = NULL;
                return;
        }
        
        while (temp != NULL)
        {
                temp2 = temp;
                temp = temp->next;
                free(temp2);
        }
        free(temp);
        *head = NULL;
}