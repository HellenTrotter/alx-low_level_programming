#include "hash_tables.h"

/**
 * hash_table_create - a function that creates a hash table.
 * @size: size of the array
 * Return: pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int k = 0;
	hash_table_t *h_table = malloc(sizeof(hash_table_t));

	if (!h_table)
	{
		return (NULL);
	}

	h_table->array = malloc(sizeof(hash_node_t **) * size);

	if (!h_table->array)
	{
		free(h_table);
		return (NULL);
	}

	while (k < size)
	{
		h_table->array[k] = NULL;
		k++;
	}

	h_table->size = size;
	return (h_table);
}
