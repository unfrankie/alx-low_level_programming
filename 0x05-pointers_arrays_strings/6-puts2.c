#include "main.h"

/**
 * puts2 - display every other character of a string starting with the 1st character
 * @str: string to display the characters from
 */

void puts2(char *str)
{
	int l, i;

	l = 0;

	while (str[l] != '\0')
	{
		l++;
	}

	for (i = 0; i < l; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
