#include "lists.h"
/**
 * add_nodeint_end - Adds a new node at the
 *                   end of a listint_t list.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */

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