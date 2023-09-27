#include "lists.h"

/**
 * insert_nodeint_at_index - a function that inserts a new node at
 * a given position.
 * @head: parameter
 * @idx: parameter
 * @n: parameter
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int k;
	listint_t *new;
	listint_t *tmp = *head;

	new = malloc(sizeof(listint_t));

	if (new == NULL || head == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (k = 0; tmp && k < idx; k++)
	{
		if (k == idx - 1)
		{
			new->next = tmp->next;
			tmp->next = new;
			return (new);
		}
		else
		tmp = tmp->next;
	}
	return (NULL);
}
