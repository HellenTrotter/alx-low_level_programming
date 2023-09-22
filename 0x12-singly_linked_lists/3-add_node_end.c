#include "lists.h"

/**
 * add_node_end -  function that adds a new node at the end of a list.
 * @head: parameter
 * @str: parameter
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *_new = malloc(sizeof(list_t));
	int len = 0;

	while (str[len])
	{
		len++;
	}
	if (_new == NULL)
	{
		return (NULL);
	}
	if (str == NULL)
	{
		return (NULL);
	}
	_new->str = strdup(str);
	_new->len = len;

	_new->next = NULL;

	if (*head == NULL)
	{
		*head = _new;
		return (_new);
	}
	else
	{
		list_t *old = *head;

		while (old->next != NULL)
		{
			old = old->next;
		}
		old->next = _new;
	}
	return (_new);
}
