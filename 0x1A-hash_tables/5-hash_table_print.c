#include "hash_tables.h"

/**
 * hash_table_print - a function that prints the hash table
 * @ht: hash tables
 * Return: a dictionary with the format of the hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *tmp;
	int i = 1;

	if (!ht)
	{
		return;
	}

	printf("{");

	for (index = 0; index < ht->size; index++)
	{
		for (tmp = ht->array[index]; tmp; tmp = tmp->next)
		{
			if (i)
			{
				printf("'%s':'%s'", tmp->key, tmp->value);
						i = 0;
			}

			else
			printf(", '%s':'%s'", tmp->key, tmp->value);
		}
	}

	printf("}\n");
}
