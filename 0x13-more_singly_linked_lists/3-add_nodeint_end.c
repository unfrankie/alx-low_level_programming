#include "lists.h"

/**
  * add_nodeint_end - add a new node at the end
  * @head: head pointer
  * @n: integer
  * Return: address of the new element || NULL if it fails
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *i;
	listint_t *j = *head;

	i = malloc(sizeof(listint_t));
	if (!i)
		return (NULL);
	i->n = n;
	i->next = NULL;
	if (*head == NULL)
	{
		*head = i;
		return (i);
	}
	while (j->next)
		j = j->next;
	j->next = i;
	return (i);
}
