#include <stdio.h>
#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: string to append to
 * @src: string
 * @n: number of bytes of string to concatenate
 * Return: a pointer to the resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
