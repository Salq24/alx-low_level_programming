#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: the size of the array
 * Return: pointer to the new hash table,
 * else, NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table1 = NULL;
	unsigned long int x;

	table1 = malloc(sizeof(hash_table_t));
	if (table1 == NULL)
		return (NULL);

	table1->array = malloc(sizeof(hash_node_t *) * size);
	if (table1->array == NULL)
	{
		free(table1);
		return (NULL);
	}

	for (x = 0; x < size; x++)
	{
		table1->array[x] = NULL;
	}
	table1->size = size;

	return (table1);
}
