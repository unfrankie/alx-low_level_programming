#include "main.h"
#include <stdio.h>

int 0_sqrt_recursion(int n, int i);

/**
  * _sqrt_recursion - the natural square root of a number
  * @n: the number
  * Return: the result
  */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (0_sqrt_recursion(n, 0));
}

/**
  * 0_sqrt_recursion - the natural number
  * @n: number to calculate the sqaure root of
  * @i: the nunber under the hood
  * Return: the result
  */

int 0_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (0_sqrt_recursion(n, i + 1));
}
