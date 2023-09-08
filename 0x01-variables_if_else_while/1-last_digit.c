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
	int l_degit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;
	if (ld > 5)
	{
		printf("The last degit of %d is %d and it's greater than 5\n", n, ld);
	}
	else if (ld == 0)
	{
		printf("The last degit of %d is %d and it's 0\n", n, ld);
	}
	else
	{
		print("The last digit of %d is %d and it's less than 6 and not 0", n, ld);
	}
	return (0);
}
