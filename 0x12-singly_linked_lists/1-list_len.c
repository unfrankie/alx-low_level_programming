#include "lists.h"

/**
  * list_len - return the number of elements
  * @h: head pointer
  * Return: i
  */

size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
