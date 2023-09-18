#include "main.h"

/**
  * print_rev - display a string in reverse
  * @s: string to be displayed
  */

void print_rev(char *s)
{
	int l = 0, rev = 0;
	l = _strlen(s);

	for (rev = l - 1; rev >= 0; rev--)
	_putchar(s[rev]);
	_putchar('\n');
}
