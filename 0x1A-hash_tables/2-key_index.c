#include "hash_tables.h"

/**
 * key_index - have a key index
 * @key: key
 * @size: size
 *
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	/* we can divide by 0 & the algorithm doesn't work when key = 0 */
	if (!key || !key[0] || size == 0)
		return (0);

	return ((unsigned long int)(hash_djb2(key) % size));
}
