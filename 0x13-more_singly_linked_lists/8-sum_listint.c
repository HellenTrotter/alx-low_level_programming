#include "lists.h"

/**
 * sum_listint - a function that returns the sum of all the data (n) of a
 * linked list
 * @head: parameter
 * Return: if the list is empty, return 0
 */

int sum_listint(listint_t *head)
{
	int j = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		j += head->n;
		head = head->next;
	}

	return (j);
}
