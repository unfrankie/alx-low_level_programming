#include "main.h"
#include <stdio.h>

/**
  *rev_string - Reverse a string
  *@s: String to be reversed
  *Return: 0
  */
void rev_string(char *s)
{
	int i = 0, l;

	l = _strlen(s) - 1;
	while (l > i)
	{
		swap_char(s + l, s + i);
		i++;
		l--;
	}
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
