#include "lists.h"

/**
  * get_nodeint_at_index - returns the nth node
  * @head: head pointer
  * @index: of the node starting at 0
  * Return: if the node doesn't exist return NULL
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *j = head;

	while (j && i < index)
	{
		j = j->next;
		i++;
	}

	return (j ? j : NULL);
}
