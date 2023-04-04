#include "lists.h"


listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
        unsigned int i = 0;
        listint_t *temp;
        temp = head;   

        if (head == NULL)
        {
                return NULL;
        }


        while (temp->next != NULL)
        {
                if (i == index)
                {
                        break;
                }
                
                i++;
                temp =  temp->next;

                
        }
        if (temp == NULL)
        {
                return NULL;
        }
        return (temp);
}
