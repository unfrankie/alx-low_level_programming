#include "main.h"

/**
  * flip_bits - returns the number of bits you would need to flip to get from
  * one number to another
  * @n: 1st number
  * @m: 2nd number
  * Return: number of bits
  */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int ulint;
	int i;

	ulint = n ^ m;
	i = 0;
	while (ulint)
	{
		i++;
		ulint &= (ulint - 1);
	}
	return (i);
}
