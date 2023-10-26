#include "main.h"

/**
  * print_binary - print the binary representation of a number
  * @n: the number
  */

void print_binary(unsigned long int n)
{
	int i;
	int j = 0;
	unsigned long int ulint;

	for (i = 63; i >= 0; i--)
	{
		ulint = n >> i;
		if (ulint & 1)
		{
			_putchar('1');
			j++;
		}
		else if (j)
			_putchar('0');
	}
	if (!j)
		_putchar('0');
}
