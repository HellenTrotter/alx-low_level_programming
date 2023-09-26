#include "lists.h"

/**
 * pop_listint - a function that deletes the head node of
 * a listint_t linked list, and returns the head node’s data (n).
 * @head: parameter
 * Return: if the linked list is empty return 0
 */

int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
        int d = temp->n;
	
	
	if (*head == NULL)
	{
		return (0);
	}

	*head = (*head)->next;

	free(temp);

	return (d);
}
