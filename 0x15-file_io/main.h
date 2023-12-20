#ifndef MAIN_H
#define MAIN_H

#define BUFFER_SIZE 1024

#include <stdlib.h>
#include <unistd.h> /* UNIX OR POSIX Standard Library */
#include <fcntl.h>  /* File Control Library */
#include <sys/types.h>
#include <sys/stat.h>
int _putchar(int c);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);


#endif
