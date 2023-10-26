#include "main.h"

/**
  * get_bit - return the value of a bit at a given index
  * @n: the number
  * @index: the index starting from 0
  * Return: the value of bit at index || -1 if an error occured
  */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int ulint;

	if (index > 64)
		return (-1);
	ulint = n >> index;
	return (ulint & 1);
}
