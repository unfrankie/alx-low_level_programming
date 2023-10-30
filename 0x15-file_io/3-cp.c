#include "main.h"

/**
  * cp_file - copie the content of a file to another file
  * @argc: number of argument
  * @argv: argument pointer
  * Return: 0
  */

int cp_file(int argc, char *argv[])
{
	int src, dest, r, w;
	char *c;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	c = filesize(argv[2]);
	src = open(argv[1], O_RDONLY);
	r = read(src, filename, 1024);
	dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while (r > 0)
	{
		if (src == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,"Error: Can't read from file %s\n
					", argv[1]);
			free(filename);
			exit(98);
		}
		w = write(dest, filename, r);
		if (dest == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,"Error: Can't write to %s\n", 
					argv[2]);
			free(filename);
			exit(99);
		}
		r = read(src, filename, 1024);
		dest = open(argv[2], O_WRONLY | O_APPEND);
	}
	free(filename);
	close_file(src);
	close_file(dest);
	return (0);
}
