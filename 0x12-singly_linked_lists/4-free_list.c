#include "lists.h"

/**
 * free_list - function that frees a list_t list.
 * @head: parameter
 * Return: 0 (success)
 */

void free_list(list_t *head)
{
	list_t *list;

	while (head)
	{
		list = head->next;
		free(head->str);
		free(head);
		head = list;
	}
}
