#include <stdio.h>

/**
 * main - causes an infinite loop
 *
 * Return: 0
 */

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");
	/* A warning about an infinite loop */
	i = 0;
	while (i < 10)
	{
		putchar(i);
	}
	/* the infinite loop we were warned about */
	printf("Infinite loop avoided! \\o/\n");
	/* oh! its somehow avoided? */
	return (0);
}
