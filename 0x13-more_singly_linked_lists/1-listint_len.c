#include "lists.h"

/**
  * listint_len - return number of elements
  * @h: head pointer
  * Return: the number of elements
  */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
