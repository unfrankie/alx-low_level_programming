#include "hash_tables.h"

/**
  * hash_table_delete - delete a hash table
  * @ht: hash table to be deleted
  */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		hash_node_t *node = ht->array[i];
		
		while (node != NULL)
		{
			hash_node_t *temp = node;
			node = node->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}

	free(ht->array);
	free(ht);
}
