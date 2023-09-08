#include <stdio.h>
/**
  * main - entry point
  * description - alphabet in lower case
  * Return: Always 0 (success)
  */
int main(void)
{
	int n = 98;
	while(n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
