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

/**
  * _strlen - returns the length of a string
  * @s: the string
  * Return: returns the lenght
  */

int _strlen(char *s)
{
	int n, i;

	i = 0;
	for (n = 0; s[n] != '\0'; n++)
	i++;
	return (i);
}
