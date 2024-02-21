#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int x;
	hash_node_t *nw = NULL, *tmp = NULL;

	if (ht == NULL)
		return;

	for (x = 0; x < ht->size; x++)
	{
		nw = ht->array[x];
		while (nw != NULL)
		{
			tmp = nw->next;
			free(nw->key);
			free(nw->value);
			free(nw);
			nw = tmp;
		}
	}
	free(ht->array);
	free(ht);
}

