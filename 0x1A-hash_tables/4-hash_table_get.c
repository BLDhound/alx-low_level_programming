#include "hash_tables.h"

/**
 * hash_table_get - hash table get
 * @ht: hash table
 * @key: key that i want to set or add
 *
 * Return: index
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *hash_node = NULL;
	unsigned long int idx;

	if (!ht || !key || !key[0])
		return (NULL);

	idx = key_index((unsigned char *)key, ht->size);
	hash_node = ht->array[idx];

	while (hash_node != NULL)
	{
		if (!strcmp(hash_node->key, key))
			return (hash_node->value);
		hash_node = hash_node->next;
	}
	return (NULL);
}
