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

/**
  *swap_int - swap the value of two integers
  *@a: 1st integer
  *@b: 2nd integer
  *Return: 0
  */

void swap_int(int *a, int *b)
{
	int i = *a;

	*a = *b;
	*b = i;
}
