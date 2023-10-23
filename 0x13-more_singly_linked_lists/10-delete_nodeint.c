#include "lists.h"

/**
  * delete_nodeint_at_index - delete the node at index of the linked list
  * @head: header pointer
  * @index: of the node that should be  deleted starting at 0
  * Return: 1 Successed || -1 Failed
  */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *m = *head;
	listint_t *j = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(m);
		return (1);
	}
	while (i < index - 1)
	{
		if (!m || !(m->next))
			return (-1);
		m = m->next;
		i++;
	}
	j = m->next;
	m->next = j->next;
	free(j);
	return (1);
}
