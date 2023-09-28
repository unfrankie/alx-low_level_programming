#include "main.h"

int _prime(int n, int i);

/**
  * is_prime_number - check number if its a prime number or not
  * @n: number to be checked
  * Return: 1 if n is a prime number 0 if not
  */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_prime(n, n - 1));
}

/**
  * _prime - is the n a prime number
  * @n: number to be checked
  * @i: checker
  * Return: 1 if n is prime, 0 if not
  */

int _prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (_prime(n, i - 1));
	
}
