#include "hash_tables.h"
#include <string.h>
/**
 * hash_table_get - func that retrieves a value
 * associated with a key
 * @ht: hash table
 * @key: key
 * Return: value, else, NULL]
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int ind;
	hash_node_t *tmp = NULL;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	ind = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[ind];

	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			return (tmp->value);
		}
		tmp = tmp->next;
	}
	return (NULL);
}
