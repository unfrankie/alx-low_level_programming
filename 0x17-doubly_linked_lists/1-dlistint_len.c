#include "lists.h"

/**
  * dlistint_len - return the number of elements in a linked list
  * @h: head of the list
  * Return: the number of elements
  */

size_t dlistint_len(const dlistint_t *h)
{
	size_t e = 0;

	while (h)
	{
		e++;
		h = h->next;
	}
	return (e);
}
