#include "main.h"
#include <stdio.h>

/**
  * _puts - display a string
  * @str: string to be displayed
  * Return: 0
  */

void _puts(char *str)
{
	while (*str)
	_putchar(*str++);

	_putchar('\n');
}
