#include "main.h"
/**
  * print_line - display a straight line
  * @n: how long is the line?
  * Return: 0
  */

void print_line(int n)
{
	while (n-- > 0)
	{
		_putchar('_');
	}
	_putchar('\n');
}
