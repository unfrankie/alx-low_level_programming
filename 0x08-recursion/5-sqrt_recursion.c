#include "main.h"

/**
  * _sqrt_recursion - return the natural square root of a number
  * @n: The number to find the square root
  * Return: The square root of n
  */

int _sqrt_recursion(int n)
{
	int sqrt = 1;

	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (_sqrt_check(n, sqrt));
}

/**
  * _sqrt_check - function to find the square root
  * @n: The number to find the square root of
  * @sqrt: The current square root value
  * Return: The square root of n
  */

int _sqrt_check(int n, int sqrt)
{
	if (sqrt * sqrt == n)
		return (sqrt);
	if (sqrt * sqrt > n)
		return (-1);
	return (_sqrt_check(n, sqrt + 1));
}
