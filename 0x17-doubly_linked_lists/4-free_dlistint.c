#include "lists.h"

/**
  * free_dlistint - free a list.
  * @head: head of the list
  */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *mem = head;

	while (head)
	{
		head = head->next;
		free(mem);
		mem = head;
	}
}
