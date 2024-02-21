#include "hash_tables.h"

/**
 * key_index - gives the index of a key
 * @key: the key
 * @size: size of the hash table array
 *
 * Return: index at which the key/value pair shld
 * be stored in the array of the hash table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int value_hash = hash_djb2(key);
	unsigned long int ind = value_hash % size;

	return (ind);
}
