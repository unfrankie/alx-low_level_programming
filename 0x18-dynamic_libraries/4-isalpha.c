#include "main.h"

/**
  * _isalpha - check if the character is alphabet
  * @c: the character to be checked
  * Return: always 0 (success)
  */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
