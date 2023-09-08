#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
  * main - ENTRY POINT
  * description - last digit comperation
  * Return: always 0 (Success)
  */
int main(void)
{
	int n;
	int l_d;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l_d = n % 10;
	if (l_d > 5)
	{
		printf("The last degit of %d is %d and it's greater than 5\n", n, l_d);
	}
	else if (l_d == 0)
	{
		printf("The last degit of %d is %d and it's 0\n", n, l_d);
	}
	else
	{
		print("The last digit of %d is %d and it's less than 6 and not 0", n, l_d);
	}
	return (0);
}
