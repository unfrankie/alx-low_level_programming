#include "lists.h"

/**
  * free_listint - free a list
  * @head: head pointer
  */

void free_listint(listint_t *head)
{
	listint_t *i;

	while (head)
	{
		i = head->next;
		free(head);
		head = i;
	}
}
