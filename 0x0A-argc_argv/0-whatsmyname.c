#include <stdio.h>

/**
  * task_0 - prints the name of the program
  * @argc: number of arguments
  * @argv: array of arguments
  * Return: Always 0 (Success)
  */

int task_0(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
