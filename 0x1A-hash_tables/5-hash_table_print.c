#include "hash_tables.h"

/**
  * hash_table_print - print a hash table
  * @ht: hash table
  */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	
	if (ht == NULL)
		return();

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		hash_node_t *node = ht->array[i];
		while (node != NULL)
		{
			printf("'%s': '%s'", node->key, node->value);
			if (i < ht->size - 1 || node->next != NULL)
				printf(", ");
			node = node->next;
		}
	}
	printf("}\n");
}
