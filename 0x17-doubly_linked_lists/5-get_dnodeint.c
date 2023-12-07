#include "lists.h"

/**
 * get_dnodeint_at_index - a function that returns the nth node of a
 * linked list
 * @head: Pointer to the head of the list.
 * @index: Index of the node to retrieve
 *
 * Return: pointer to the nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count;

	for (count = 0; count < index && head->next; count++)
	{
		head = head->next;
	}

	if (count < index)
	{
		return (NULL);
	}

	return (head);
}
