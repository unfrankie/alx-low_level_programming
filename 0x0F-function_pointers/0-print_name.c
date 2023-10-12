#include <stdlib.h>

/**
  * print_name - print a name
  * @name: name to print
  * @f: function
  */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
