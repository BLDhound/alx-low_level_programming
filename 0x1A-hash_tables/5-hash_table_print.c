#include "hash_tables.h"

/**
 * hash_table_print - print a hash table
 * @ht: hash table
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i = 0, flag = 0;
	hash_node_t *actual_node;

	if (!ht)
		return;

	printf("{");
	while (i < ht->size)
	{
		actual_node = ht->array[i];
		while (actual_node)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", actual_node->key, actual_node->value);
			actual_node = actual_node->next;
			flag = 1;
		}
		i++;
	}
	printf("}\n");
}
