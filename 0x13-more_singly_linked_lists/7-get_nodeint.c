#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the nth node of a linked list
 * @head: parameter
 * @index: parameter
 * Return: if the node does not exist, return NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j;

	for (j = 0; j < index; j++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
