#include "variadic_functions.h"

/**
  * sum_them_all - return the sum of all its parameters
  * @n: n parameters
  * Return: sum
  */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list l1;

	va_start(l1, n);
	for (i = 0; i < n; i++)
		sum += va_arg(l1, int);
	va_end(l1);
	return (sum);
}
