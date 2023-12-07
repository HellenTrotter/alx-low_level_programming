#include "lists.h"

/**
 * insert_dnodeint_at_index - a function that inserts a new node at a
 * given position.
 * @h: pointer to the head of the list
 * @idx: index where node should be added
 * @n: value to add new node
 *
 * Return: address of new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *head;
	unsigned int l;

	new_node = NULL;
	if (idx == 0)
	{
		new_node = add_dnodeint(h, n);
	}
	else
	{
		head = *h;
		l = 1;
		if (head != NULL)
			while (head->prev != NULL)
				head = head->prev;
		while (head != NULL)
		{
			if (l == idx)
			{
				if (head->next == NULL)
				{
					new_node = add_dnodeint_end(h, n);
				}
				else
				{
					new_node = malloc(sizeof(dlistint_t));
					if (new_node != NULL)
					{
						new_node->n = n;
						new_node->next = head->next;
						new_node->prev = head;
						head->next->prev = new_node;
						head->next = new_node;
					}
				}
				break;

			}
			head = head->next;
			l++;
		}
	}
	return (new_node);

}

