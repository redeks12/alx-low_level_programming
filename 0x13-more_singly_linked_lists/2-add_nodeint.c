#include "lists.h"

listint_t *add_nodeint(listint_t **head, const int n)
{
        listint_t *temp = (listint_t*)malloc(sizeof(listint_t));

        if (temp == NULL)
        {
                return NULL;
        }
        
        temp->next = *head;
        temp->n = n;
        *head = temp;

        return (temp);
}