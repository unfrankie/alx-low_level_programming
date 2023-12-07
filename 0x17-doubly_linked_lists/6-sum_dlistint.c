#include "lists.h"

/**
  * sum_dlistint -  return sum of all data (n) of a list
  * @head: head of the list
  * Return: sum || 0 if list empty
  */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += (*head).n;
		head = (*head).next;
	}
	return (sum);
}

