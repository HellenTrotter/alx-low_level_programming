#include "lists.h"

/**
 * add_node - a function that adds a new node at the beginning of list
 * @head: parameter
 * @str: parameter
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
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
		return (0);
	}

	_new->str = strdup(str);

	if (_new->str == NULL)
	{
		free(_new);
		return (NULL);
	}

	_new->next = *head;
	_new->len = len;

	*head = _new;

	return (_new);
}
