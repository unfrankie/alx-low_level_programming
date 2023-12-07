#include "lists.h"

/**
  * print_dlistint - print all elements of the list
  * @h: head of the list
  * Return: the number of nodes
  */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
