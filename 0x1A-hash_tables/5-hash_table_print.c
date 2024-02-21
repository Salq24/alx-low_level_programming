#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: The hash table
 * Return: ...
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int x;
	hash_node_t *nw = NULL;
	int one = 1;

	if (ht == NULL)
		return;

	printf("{");
	for (x = 0; x < ht->size; x++)
	{
		nw = ht->array[x];
		while (nw != NULL)
		{
			if (one == 0)
				printf(", ");
			printf("'%s': '%s'", nw->key, nw->value);
			one = 0;
			nw = nw->next;
		}
	}
	printf("}\n");
}
