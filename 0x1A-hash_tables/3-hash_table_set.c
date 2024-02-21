#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_set - function that adds an element to the hash table
 *
 * @ht: hash table to add to/ update
 * @key: the key
 * @value: must be duplicated
 * Return: 1, else, 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node1 = NULL, *tmp = NULL;
	unsigned long int ind;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	ind = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[ind];

	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			if (tmp->value == NULL)
				return (0);
			return (1);
		}
		tmp = tmp->next;
	}

	node1 = malloc(sizeof(hash_node_t));
	if (node1 == NULL)
		return (0);

	node1->key = strdup(key);
	if (node1->key == NULL)
	{
		free(node1);
		return (0);
	}

	node1->value = strdup(value);
	if (node1->value == NULL)
	{
		free(node1->key);
		free(node1);
		return (0);
	}
	node1->next = ht->array[ind];
	ht->array[ind] = node1;

	return (1);
}
