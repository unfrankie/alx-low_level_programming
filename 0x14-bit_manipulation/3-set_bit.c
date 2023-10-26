#include "main.h"

/**
  * set_bit - set the value of a bit to 1 at a given index
  * @n: the number (pointer)
  * @index: the index starting from 0
  * Return: 1 if it work || -1 if an error occured
  */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int ulint;

	if (index > 64)
		return (-1);
	for (ulint = 1; index > 0; index--, ulint *= 2)
	{
		;
	}
	*n += ulint;
	return (1);
}
