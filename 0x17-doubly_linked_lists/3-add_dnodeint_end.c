#include "lists.h"

/**
  * add_dnodeint_end - add a new node at the end of a list
  * @head: head of the list
  * @n: node value
  * Return: address of the new element || NULL if it failed
  */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *mem;

	if (!head)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (!*head)
		*head = new;
	else
	{
		mem = *head;
		while (mem->next)
			mem = mem->next;
		mem->next = new;
		new->prev = mem;
	}
	return (new);
}
