#include <stdio.h>
#include "main.h"

/**
  * _sqrt_recursion - natural square root pf a number
  * @n: the number
  * Return: if number is negative return -1
  */

int _sqrt_recursion(int n)
{
	int i;

	if (n < 0)
		return (-1);
	for (i = 0;; i++)
	{
		if (i * i <= n && n < (i + 1) * (i + 1))
			return (i);
	}
}
