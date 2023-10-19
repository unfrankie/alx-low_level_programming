#include "lists.h"

/**
  * add_node_end - add a new node at the end
  * @head: head pointer
  * @str: string
  * Return: the address of the new element || NULL
  */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *l;
	int i = 0;
	list_t *l1 = *head;

	while (str[i])
		i++;
	l = malloc(sizeof(list_t));
	if (!l)
	{
		return (NULL);
	}
	l->str = strdup(str);
	l->len = i;
	l->next = NULL;
	if (*head == NULL)
	{
		*head = l;
		return (l);
	}
	while (l1->next)
		l1 = l1->next;

	l1->next = l;

	return (l);
}
