#include "lists.h"

/**
  * add_nodeint - add a new node at the beginning
  * @head: head pointer
  * @n: integer
  * Return: address of the new element || NULL
  */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *i;

	i = malloc(sizeof(listint_t));
	if (!i)
		return (NULL);
	i->n = n;
	i->next = *head;
	*head = i;
	return (i);
}
