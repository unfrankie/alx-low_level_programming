#include "lists.h"

/**
  * free_list - free list
  * @head: head pointer
  */

void free_list(list_t *head)
{
	list_t *l;

	while (head)
	{
		l = head->next;
		free(head->str);
		free(head);
		head = l;
	}
}
