#include "main.h"
#include <stdio.h>

/**
  * _isupper - Checks for uppercase char
  * @c: char to be checked
  * Return: 0
  */

int _isupper(int c)
{
	int c;

	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
