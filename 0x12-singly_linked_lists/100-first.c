#include "lists.h"

void before(void) __attribute__ ((constructor));

/**
 * before - print You're beat! and yet, you must allow,
 * I bore my house upon my back! 
 * before the main function is executed
 */

void before(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
