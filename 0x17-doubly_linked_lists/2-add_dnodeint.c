#include "lists.h"

/**
  * add_dnodeint - add new node at the begining of list
  * @head: head of the list
  * @n: node value
  * Return: address of the new element || NULL if it failed
  */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	(*new).n = n;
	(*new).next = *head;
	(*new).prev = NULL;
	*head = new;
	if ((*new).next != NULL)
		new->next->prev = new;
	return (new);
}
