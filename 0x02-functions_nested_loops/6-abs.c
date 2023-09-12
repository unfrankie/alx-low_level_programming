#include "main.h"
#include <stdio.h>

/**
  * _abs - Compute the absolute value of a number
  * @n - the number that will be applied on
  * Return: Always 0 (success)
  */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (n * -1);
	}
}
