#include "lists.h"

/**
  * insert_nodeint_at_index - inserts a new node at a given position
  * @head: head pointer
  * @idx: where the new node should be added starting at 0
  * @n: integer
  * Return: the address of the new node || NULL if failed
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *j;
	listint_t *m = *head;

	j = malloc(sizeof(listint_t));
	if (!j || !head)
		return (NULL);
	j->n = n;
	j->next = NULL;
	if (idx == 0)
	{
		j->next = *head;
		*head = j;
		return (j);
	}
	for (i = 0; m && i < idx; i++)
	{
		if (i == idx - 1)
		{
			j->next = m->next;
			m->next = j;
			return (j);
		}
		else
			m = m->next;
	}
	return (NULL);
}
