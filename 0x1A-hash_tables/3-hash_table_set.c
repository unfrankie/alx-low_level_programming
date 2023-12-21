#include "hash_tables.h"

/**
  * hash_table_set - add an element to the hash table
  * @ht: hash table to add
  * @key: key of the element
  * @value: value of the element
  * Return: 1 success || 0 fail
  */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	if (ht == NULL || key == NULL || value == NULL)
		return 0;

	unsigned long int index = key_index((const unsigned char *)key, ht->size);
	hash_node_t *new_node, *temp;

	temp = ht->array[index];

	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			if (temp->value == NULL)
				return 0;
			return 1;
		}
		temp = temp->next;
	}

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return 0;

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	if (new_node->key == NULL || new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node->value);
		free(new_node);
		return 0;
	}

	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return 1;
}