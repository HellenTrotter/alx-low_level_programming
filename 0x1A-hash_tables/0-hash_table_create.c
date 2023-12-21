#include "hash_tables.h"

/**
 * hash_table_create - a function that creates a hash table.
 * @size: size of the array
 * Return: pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int k;
	hash_table_t *h_table;

	if (size == 0)
	{
		return (NULL);
	}

	h_table = malloc(sizeof(hash_table_t));

	if (h_table == NULL)
	{
		return (NULL);
	}

	h_table->size = size;
	h_table->array = malloc(sizeof(hash_node_t *) * size);

	if (h_table->array == NULL)
	{
		return (NULL);
	}

	for (k = 0; k < size; k++)
	{
		h_table->array[k] = NULL;
	}

	return (h_table);
}
