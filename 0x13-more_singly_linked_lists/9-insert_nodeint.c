#include "lists.h"

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
        unsigned int i = 0;
        listint_t *temp;
        listint_t *temp2;
        listint_t *new = (listint_t*)malloc(sizeof(listint_t));
        temp = *head;   

        if (*head == NULL)
        {
                return NULL;
        }


        while (temp->next != NULL)
        {
                if (i == idx)
                {
                        break;
                }
                i++;
                temp2 = temp;
                temp =  temp->next;
                if (temp->next == NULL)
                        return;
        }
        new->n = n;
        new->next = temp;     
        temp2->next = new;
        

        return (new); 
}