#include "hash_tables.h"

/**
  * key_index - give the index of a key in a hash table
  * @key: key to find
  * @size: size of array
  * Return: index
  */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    return (hash_djb2(key) % size);
}
