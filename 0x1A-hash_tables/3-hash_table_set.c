#include "hash_tables.h"

/**
 * hash_table_set - a function that adds an element to the hash table.
 * @ht:  hash tableto be updated
 * @key: the key
 * @value: is the value associated with the key
 * Return: 1 if successful
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int k = 0;
	char *tmp_value = NULL;
	hash_node_t *tmp, *n;

	if (!(ht && ht->array && value))
	{
		return (0);
	}

	if (strlen(key) == 0)
	{
		return (0);
	}
	tmp_value = strdup(value);

	if (!tmp_value)
	{
		return (0);
	}

	k = key_index((unsigned char *)key, ht->size);

	tmp = ht->array[k];

	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = tmp_value;
			tmp->value = strdup(value);
			free(tmp_value);
			return (1);
		}

		tmp = tmp->next;
	}

	n = malloc(sizeof(hash_node_t));

	if (n == NULL)
	{
		free(tmp_value);
		free(n);
		return (0);
	}
	n->value = tmp_value;
	n->next = ht->array[k];
	ht->array[k] = n;
	return (1);
}
