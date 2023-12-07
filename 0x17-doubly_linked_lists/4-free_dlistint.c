#include "lists.h"

/**
 * free_dlistint - a function that frees a dlistint_t list.
 * @head: list
 * Return: Void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *currnt;

	while (head != NULL)
	{
		currnt = head;
		head = head->next;
		free(currnt);
	}
}
