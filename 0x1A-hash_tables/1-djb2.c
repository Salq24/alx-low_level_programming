#include "hash_tables.h"

/**
 * hash_djb2 - A hash function that implements the djb2 algorithm
 * @str: Used to generate hash value
 *
 * Return: hash value
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int m_hash = 5381;
	int x;

	while ((x = *str++))
	{
		m_hash = ((m_hash << 5) + m_hash) + x;
	}

	return (m_hash);
}
