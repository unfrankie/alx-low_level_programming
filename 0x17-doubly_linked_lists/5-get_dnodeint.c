#include "lists.h"

/**
  * get_dnodeint_at_index - returns nth node of a linked list.
  * @head: head of the list
  * @index: node index
  * Return: nth node || NULL
  */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *p = head;

	while (p)
	{
		i++;
		if (i - 1 == index)
			return (p);
		p = p->next;
	}
	return (NULL);
}
