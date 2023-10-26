#include "main.h"

/**
  * clear_bit - set the value of a bit to 0 at a given index
  * @n: the number
  * @index: index starting from 0
  * Return: 1 if it work || -1 if an error occured
  */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int ulint;
	unsigned int uint;

	if (index > 64)
		return (-1);
	uint = index;
	for (ulint = 1; uint > 0; ulint *= 2, uint--)
	{
		;
	}
	if ((*n >> index) & 1)
	{
		*n -= ulint;
	}
	return (1);
}
