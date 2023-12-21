#include "hash_tables.h"

/**
  * hash_table_create - create hash table
  * @size: size of array
  * Return: error - NULL || new table
  */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *new_t = malloc(sizeof(hash_table_t));

	if (new_t == NULL)
		return (NULL);

	new_t->size = size;
	new_t->array = malloc(sizeof(hash_node_t *) * size);
	if (new_t->array == NULL)
	{
		free(new_t);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		new_t->array[i] = NULL;

	return (new_t);
}
