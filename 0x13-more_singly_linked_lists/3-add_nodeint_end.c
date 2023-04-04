#include "lists.h"

listint_t *add_nodeint_end(listint_t **head, const int n)
{
        listint_t *temp = *head;

        listint_t *last = (listint_t*)malloc(sizeof(listint_t));
        last->n = n;
        last->next = NULL;

        if (*head == NULL)
        {
                *head = last;
                return (last);
        }

        while (temp->next != NULL)
        {
                temp = temp->next;
        }

        temp->next = last;
        return (last);

}