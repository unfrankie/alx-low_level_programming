#include <stdio.h>
/**
  * main - entry point
  * description - base 16 hexadecimal but in lowercase
  * Return: Always 0 (success)
  */
int main(void)
{
	int n;
	int a;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	for (a = 97; a <= 102; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
