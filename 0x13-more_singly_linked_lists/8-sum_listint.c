#include "lists.h"

/**
  * sum_listint - return sum of all the data (n)
  * @head: head pointer
  * Return: sum || 0 if the list is empty
  */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *i = head;

	while (i)
	{
		sum += i->n;
		i = i->next;
	}
	return (sum);
}
