#include <stdlib.h>

/**
  * array_iterator - execute a function given as a parameter on each element of
  * an array
  * @array: array
  * @size: size of array
  * @action: pointer to function
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
