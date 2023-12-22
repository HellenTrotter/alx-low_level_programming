#include "hash_tables.h"

/**
 * hash_table_get - a function that retrieves a value associated with a key.
 * @ht: hash table
 * @key: key you are looking for
 * Return:  the value associated with the element
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *tmp = NULL;

	if (!ht || !key)
	{
		return (NULL);
	}

	if (ht)
	{
		index = key_index((const unsigned char *) key, ht->size);
		tmp = ht->array[index];

		while (tmp)
		{
			if (strcmp(tmp->key, key) == 0)
			{
				return (tmp->value);
			}
			tmp = tmp->next;
		}
	}
	return (NULL);
}
