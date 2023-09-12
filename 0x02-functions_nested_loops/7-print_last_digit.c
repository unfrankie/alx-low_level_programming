#include "main.h"

/**
  * print_last_digit - display the last digit of a number
  * @n: the number that will be moduled
  * Return: always 0 (success)
  */

int print_last_digit(int n)
{
	int i;

	i = 10 % n;
	if (i < 0)
	{
		i = i * -1;
	}
	_putchar(i + '0');
	return (i);
}
