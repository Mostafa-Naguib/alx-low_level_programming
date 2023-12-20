#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX STDOUT.
 *
 * @filename: The file name.
 * @letters: is the number of letters it should read and print.
 *
 * Return: The actual number of letters it could read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char buffer[BUFFER_SIZE * 8];
	ssize_t byte_read;

	if (!filename || !letters)
		return (0);

	fd = open(filename, 0);
	if (fd == -1)
		return (0);

	byte_read = read(fd, &buffer[0], letters);

	byte_read = write(1, &buffer[0], byte_read);

	close(fd);
	return (byte_read);
}
