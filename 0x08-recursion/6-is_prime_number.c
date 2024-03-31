#include "main.h"

/**
  * is_prime_number - check if a number is prime
  * @n: The number to check
  * Return: 1 if n is prime, 0 otherwise
  */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_is_prime(n, 2));
}

/**
  * _is_prime - Helper function to check if a number is prime
  * @n: The number to check
  * @i: The current divisor to check
  * Return: 1 if n is prime, 0 otherwise
  */

int _is_prime(int n, int i)
{
	if (i == n)
		return (1);
	if (n % i == 0)
		return (0);
	return (_is_prime(n, i + 1));
}
