#include "lists.h"

void first(void) __attribute__ ((constructor));

/**
  * first - print You're beat! and yet, you must allow,
  * I bore my house upon my back!
  * before the main function is executed
  */

void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
