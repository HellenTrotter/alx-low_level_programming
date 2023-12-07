#include "lists.h"

/**
 * print_dlistint - a function that prints all the elements of a list
 * @h: parameter
 *
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t node_num = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		node_num++;
	}

	return (node_num);
}
