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
		_putchar(-i + 48);
		return (-i);
	}
	else
	{
		_putchar(i + 48);
		return (i);
	}
}
