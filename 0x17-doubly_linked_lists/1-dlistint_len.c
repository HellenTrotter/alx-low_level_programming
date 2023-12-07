#include "lists.h"

/**
 * dlistint_len - a function that returns the number of elements in
 * a linked list
 * @h: pointer to the head of the list
 *
 * Return: the number of elements in a linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t node_len = 0;

	while (h != NULL)
	{
		h = h->next;
		node_len++;
	}

	return (node_len);
}
