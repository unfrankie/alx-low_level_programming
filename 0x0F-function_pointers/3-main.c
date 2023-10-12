#include "3-calc.h"

/**
  * main - ?
  * @argc: number of argument
  * @argv: array of argument
  * Return: 0
  */

int main(int argc, char *argv[])
{
	int a1, a2, result;
	char c;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a1 = atoi(argv[1]);
	a2 = atoi(argv[3]);
	func = get_op_func(argv[2]);
	if (!func)
	{
		printf("Error\n");
		exit(99);
	}
	c = *argv[2];
	if ((c == '/' || c == '%') && a2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = func(a1, a2);
	printf("%d\n", result);
	return (0);
}
