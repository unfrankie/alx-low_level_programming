#include "main.h"

/**
  * print_triangle - display a triangle
  * @size: size of the triangle
  * Return: 0
  */

void print_triangle(int size)
{
	int i1, i2;

	if (size > 0)
	{
		for (i1 = 1; i1 <= size; i1++)
		{
			for ((i2 = size - i1); i2 > 0; i2--)
			_putchar(' ');

			for (i2 = 0; i2 < i1; i2++)
			_putchar('#');

			if (i1 == size)
			continue;

			_putchar('\n');
		}
	}
	_putchar('\n');
}
