#include <stdio.h>
#include "main.h"

/**
  * _sqrt_recursion - natural square root pf a number
  * @n: the number
  * return: if number is negative return -1
  */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		for (int i = 0;; i++)
		{
			if (i * i <= n && n < (i + 1) * (i + 1))
				return (i);
		}
}
