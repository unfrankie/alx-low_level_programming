#include "variadic_functions.h"

/**
  * print_numbers - print numbers
  * @separator: the string to be printed between numbers
  * @n: number of integers passed to the function
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list l;

	va_start(l, n);
	for (i = 0; i < n; i++)
	{
		if (!separator)
			printf("%d", va_arg(l, int));
		else if (separator && i == 0)
			printf("%d", va_arg(l, int));
		else
			printf("%s%d", separator, va_arg(l, int));
	}
	va_end(l);
	printf("\n");
}
