#include <stdio.h>
#include "main.h"

/**
  * print_diagsums - prints the sum of the two diagonals
  * of a square matrix of integers
  * @a: the square matrix
  * @size: size of the matrix
  */

void print_diagsums(int *a, int size)
{
	int i;
	unsigned int s0, s1;

	s0 = 0;
	s1 = 0;
	for (i = 0; i < size; i++)
	{
		s0 += a[(size * i) + i];
		s1 += a[(size * (i + 1)) - (i + 1)];
	}
	printf("%d, %d\n", s0, s1);
}
