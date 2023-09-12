#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - display all numbers from n to 98
 * @n: number displayed from
 */
void print_to_98(int n)
{
	int x, m;

	if (n <= 98)
	{
		for (x = n; x <= 98; x++)
		{
			if (x != 98)
				printf("%d, ", x);
			else if (x == 98)
				printf("%d\n", x);
		}
	} else if (m >= 98)
	{
		for (m = n; m >= 98; m--)
		{
			if (m != 98)
				printf("%d, ", m);
			else if (m == 98)
				printf("%d\n", m);
		}
	}
}

