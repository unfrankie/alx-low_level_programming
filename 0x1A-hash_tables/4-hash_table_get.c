#include "hash_tables.h"

/**
  * hash_table_get - retrieve a value associated with a key
  * @ht: hash table to look into
  * @key: key of the value to retrieve
  * Return: value || NULL key not found
  */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	if (ht == NULL || key == NULL)
		return NULL;

	unsigned long int index = key_index((const unsigned char *)key, ht->size);
	hash_node_t *temp = ht->array[index];

	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
			return temp->value;
		temp = temp->next;
	}

	return NULL;
}