#include "main.h"

/**
  * _islower - check for lowercase character
  * @c: the character to be checked
  * Return: Always 0 (success)
  */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
