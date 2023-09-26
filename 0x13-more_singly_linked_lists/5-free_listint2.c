#include "lists.h"

/**
 * free_listint2 - a function that frees a list
 * @head: parameter
 * Return: The function sets the head to NULL
 */

void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
	{
		return;
	}

	while (*head != NULL)
	{
		current = (*head)->next;
		free(*head);
		*head = current;
	}

	*head = NULL;
}
