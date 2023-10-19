#include "lists.h"

/**
  * add_node - add a new node at the beginning
  * @head: head pointer
  * @str: string
  * Return: the address of the new element || NULL
  */

list_t *add_node(list_t **head, const char *str)
{
	list_t *l;
	int i = 0;

	while (str[i])
		i++;
	l = malloc(sizeof(list_t));
	if (!l)
	{
		return (NULL);
	}
	l->str = strdup(str);
	l->len = i;
	l->next = (*head);
	(*head) = l;
	return (*head);
}
