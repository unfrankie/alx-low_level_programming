#include "main.h"

/**
  * read_textfile - reads a text file and prints it to the POSIX standard output
  * @filename: pointer filename
  * @letters: is the number of letters it should read and print
  * Return: the actual number of letters it can read & print
  *		if the file cannot be open or read | filename is NULL 
  *		| write fail return 0
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *c;

	if (filename == NULL)
		return (0);
	c = malloc(sizeof(char) * letters);
	if (c == NULL)
		return (0);
	o = open(filename, O_RDONLY);
	r = read(o, c, letters);
	w = write(STDOUT_FILENO, c, r);
	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(c);
		return (0);
	}
	free(c);
	close(o);
	return (w);
}
