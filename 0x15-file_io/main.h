#ifndef MAIN_HEADER
#define MAIN_HEADER

#include <sys/types.h>
#include <sys/stat.h>

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int cp_file(int argc, char *argv[]);
char *filesize(char *filename);
void closefile(int fd_value);

#endif
