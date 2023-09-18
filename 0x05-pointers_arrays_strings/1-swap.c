#include "main.h"

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
