#include "main.h"

/**
  * create_file - create a file
  * @filename: filename pointer
  * @text_content: text content pointer
  * Return: 1 if successed | -1 if failed
  */

int create_file(const char *filename, char *text_content)
{
	int o, w;
	int length = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}
	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, length);
	if (o == -1 || w == -1)
		return (-1);
	close(o);
	return (1);
}
