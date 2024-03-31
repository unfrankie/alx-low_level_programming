#include "main.h"

/**
  * wildcmp - compares two strings
  * @s1: the string
  * @s2: the special string containing *
  * Return: 1 if identical, otherwise 0
  */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		if (*s2 == '\0' || (*s2 == '*' && *(s2 + 1) == '\0'))
			return (1);
		return (0);
	}
	if (*s2 == '*')
	{
		if (*(s2 + 1) == '*')
			return (wildcmp(s1, s2 + 1));
		if (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2))
			return (1);
		return (0);
	}
	if (*s1 != *s2)
		return (0);
	return (wildcmp(s1 + 1, s2 + 1));
}
