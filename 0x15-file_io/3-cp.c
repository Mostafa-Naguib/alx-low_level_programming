#include "main.h"

#define ERR_SRC "Error: Can't read from file %s\n"
#define ERR_DEST "Error: Can't write from file %s\n"

/**
 * main - A program that copies the content of a file to another file.
 *
 * @argc: The number of argument.
 * @argv: The array of argument.
 *
 * Return: EXIT_SUCCESS on success...
 */

int main(int argc, char *argv[])
{
	int fd_src, fd_dest;
	char *buffer[BUFFER_SIZE];
	ssize_t bytes_wrote, bytes_read;

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);


	fd_src = open(argv[1], O_RDWR);
	if (fd_src == -1)
		dprintf(STDERR_FILENO, ERR_SRC, argv[1]), exit(98);


	fd_dest = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (fd_dest == -1)
		dprintf(STDERR_FILENO, ERR_DEST, argv[2]), exit(99);


	bytes_read = read(fd_src, buffer, BUFFER_SIZE);
	if (bytes_read == -1)
		dprintf(STDERR_FILENO, ERR_SRC, argv[1]), exit(98);


	bytes_wrote = write(fd_dest, buffer, bytes_read);
	if (bytes_wrote != bytes_read)
		dprintf(STDERR_FILENO, ERR_DEST, argv[2]), exit(99);


	fd_src = close(fd_src);
	if (fd_src)
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd_src), exit(100);

	fd_dest = close(fd_dest);
	if (fd_dest)
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd_src), exit(100);

	exit(EXIT_SUCCESS);
}
