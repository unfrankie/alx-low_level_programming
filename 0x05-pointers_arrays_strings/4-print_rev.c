#include "main.h"

/**
  * print_rev - display a string in reverse
  * @s: string to be displayed
  */

void print_rev(char *s)
{
	int i, c, l;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	l = i;
	for (c = l - 1; c >= 0; c--)
	{
		_putchar(s[c]);
	}

	_putchar('\n');
}
