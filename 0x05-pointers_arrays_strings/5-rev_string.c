#include "main.h"

/**
 * rev_string - reverse a string
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	char c;
	int i, l, l1;

	l = 0;
	l1 = 0;

	while (s[l] != '\0')
	{
		l++;
	}

	l1 = l - 1;

	for (i = 0; i < l / 2; i++)
	{
		c = s[i];
		s[i] = s[l1];
		s[l1--] = c;
	}
}
