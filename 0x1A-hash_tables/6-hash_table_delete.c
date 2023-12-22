#include "hash_tables.h"

/**
 * hash_table_delete - a function that deletes a hash table.
 * @ht: hash table
 *
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp, *next;
	unsigned long int index;

	if (!ht)
	{
		return;
	}

	for (index = 0; index < ht->size; index++)
	{
		for (tmp = ht->array[index]; tmp; tmp = next)
		{
			next = tmp->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
		}
	}

	free(ht->array);
	free(ht);
}
