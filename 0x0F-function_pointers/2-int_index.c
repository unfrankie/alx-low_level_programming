#include <stdlib.h>

/**
  * int_index - searche for an integer
  * @array: array
  * @size: size of array
  * @cmp: pointer to the function to compare
  * Return: 0 || -1
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
