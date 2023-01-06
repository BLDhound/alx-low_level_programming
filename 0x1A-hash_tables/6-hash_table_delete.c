#include "hash_tables.h"

/**
 * hash_table_delete - delete all the hash table
 * @ht: hash table
 *   
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int i = 0;
	hash_node_t *actual_node = NULL, *next_node = NULL;

	if (!ht)
		return;

	while (i < ht->size)
	{
		actual_node = ht->array[i];
		while (actual_node)
		{
			next_node = actual_node->next;
			free(actual_node->key);
			free(actual_node->value);
			free(actual_node);
			actual_node = next_node;
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
