#include "main.h"

/**
  * filesize - pick 1024 bytes from file
  * @filename: name of the file
  * Return: c
  */

char *filesize(char *filename)
{
	char *c;

	c = malloc(sizeof(char) * 1024);
	if (c == NULL)
	{
		dprintf(STDERR_FILENO,"Error: Can't write to %s\n", filename);
		exit(99);
	}
	return (c);
}
