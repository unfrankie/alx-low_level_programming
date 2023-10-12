#include "variadic_functions.h"

/**
  * print_all - prints anything
  * @format: list of types of arguments passed to the function
  */

void print_all(const char * const format, ...)
{
	char *string;
	char *s = "";
	int i = 0;
	va_list l;

	va_start(l, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", s, va_arg(l, int));
					break;
				case 'i':
					printf("%s%d", s, va_arg(l, int));
					break;
				case 'f':
					printf("%s%f", s, va_arg(l, double));
					break;
				case 's':
					string = va_arg(l, char *);
					if (!string)
						string = "(nil)";
					printf("%s%s", s, string);
					break;
				default:
					i++;
					continue;
			}
			s = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(l);
}
