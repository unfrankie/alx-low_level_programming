#include "main.h"

/**
  * binary_to_uint - convert a binary number to an unsigned int
  * @b: char string
  * Return: converted number || 0
  */

unsigned int binary_to_uint(const char *b)
{
	unsigned int uint = 0;
	int i;

	if (!b)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		uint = 2 * uint + (b[i] - '0');
	}
	return (uint);
}
