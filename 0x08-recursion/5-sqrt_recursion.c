#include <stdio.h>
#include "main.h"

/**
  * _sqrt_recursion - natural square root pf a number
  * @n: the number
  * return: if number is negative return -1
  */

int _sqrt_recursion(int n)
{
	int i;

	n = i * i;
	if (n < 0)
		return (-1);
	else
		return (i);
}
