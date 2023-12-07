#include "lists.h"

/**
  * insert_dnodeint_at_index - insert a new node at a given position
  * @h: head of the list
  * @idx: index of the list where the new node should be added
  * @n: node data
  * Return: address of the new node || NULL if it failed
  */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *mem;
	dlistint_t *new;
	unsigned int i;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	mem = *h;
	for (i = 0; mem != NULL && i < idx; i++)
		mem = mem->next;
	if (!mem && i == idx)
		return (add_dnodeint_end(h, n));
	else if (mem)
	{
		new = malloc(sizeof(dlistint_t));
		if (new == NULL)
			return (NULL);
		new->n = n;
		mem->prev->next = new;
		new->prev = mem->prev;
		mem->prev = new;
		new->next = mem;
		return (new);
	}
	else
		return (NULL);
}
