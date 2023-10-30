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
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
	return (c);
}

/**
  * closefile - close file
  * @fd_value: file descriptor value
  */

void closefile(int fd_value)
{
	int i;

	i = close(fd_value);
	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_value);
		exit(100);
	}
}

/**
  * main - copie the content of a file to another file
  * @argc: number of argument
  * @argv: argument pointer
  * Return: 0
  */

int main(int argc, char *argv[])
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
	r = read(src, c, 1024);
	dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (src == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			free(c);
			exit(98);
		}
		w = write(dest, c, r);
		if (dest == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", argv[2]);
			free(c);
			exit(99);
		}
		r = read(src, c, 1024);
		dest = open(argv[2], O_WRONLY | O_APPEND);
	} while (r > 0);
	free(c);
	closefile(src);
	closefile(dest);
	return (0);
}
