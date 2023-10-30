#include "main.h"

/**
  * close_file - close file
  * @fd_value: file descriptor value
  */

void close_file(int fd_value)
{
	int i;

	i = close(fd_value);
	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_value);
		exit(100);
	}
}
