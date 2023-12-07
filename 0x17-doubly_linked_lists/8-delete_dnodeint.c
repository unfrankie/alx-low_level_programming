#include "lists.h"

/**
  * delete_dnodeint_at_index - Delete the node at index of a linked list
  * @head: head of the list
  * @index: node index that should be deleted
  * Return: success 1 || fail -1
  **/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	size_t idx;
	dlistint_t *mem;
	dlistint_t *temp;
	dlistint_t *node_0, *node_1;

	if (head == NULL || *head == NULL)
		return (-1);
	for (idx = 0; *head != NULL; head = &(*head)->next, idx++)
	{
		if (idx == index)
		{
			mem = *head;
			temp = (*head)->next;

			node_0 = mem->prev;
			node_1 = mem->next;

			if (node_0)
				node_0->next = node_1;

			if (node_1)
				node_1->prev = node_0;

			free(mem);
			*head = temp;
			return (1);
		}
	}
	return (-1);
}
