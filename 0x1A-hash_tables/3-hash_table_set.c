#include "hash_tables.h"

/**
 * hash_table_set - hash table set
 * @ht: key
 * @key: key
 * @value: size
 *
 * Return: index
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx = 0;
	hash_node_t *hash_node = NULL, *new_node = NULL;
	char *new_value = NULL, *new_key = NULL;

	if (!ht || !(ht->array) || !key || !key[0])
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	new_value = strdup(value);
	if (!new_value)
		return (0);
	hash_node = ht->array[idx];
	while (hash_node)
	{
		if (!strcmp(hash_node->key, key))
		{
			free(hash_node->value);
			hash_node->value = new_value;
			return (1);
		}
		hash_node = hash_node->next;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
	{
		free(new_value);
		return (0);
	}
	new_key = strdup(key);
	if (!new_key)
	{
		free(new_node);
		free(new_value);
		return (0);
	}
	new_node->key = new_key;
	new_node->value = new_value;
	new_node->next = ht->array[idx];
	ht->array[idx] = new_node;
	return (1);
}
