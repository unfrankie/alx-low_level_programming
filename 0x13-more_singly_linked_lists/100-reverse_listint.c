#include "lists.h"

/**
  * reverse_listint - reverse a linked list
  * @head: head pointer
  * Return: pointer to the first node in the new list
  */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *i = NULL;
	listint_t *j = NULL;

	while (*head)
	{
		i = (*head)->next;
		(*head)->next = j;
		j = *head;
		*head = i;
	}
	*head = j;
	return (*head);
}
