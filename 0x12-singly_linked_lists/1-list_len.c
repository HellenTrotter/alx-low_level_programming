#include "lists.h"

/**
 * list_len - a function that returns the number of elements
 * @h: parameter
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t k = 0;

	while (h != NULL)
	{
		k++;
		h = h->next;
	}

	return (k);
}
