#include "main.h"
size_t _strlen(char *s);

/**
 * create_file - A function that creates a file.
 *
 * @filename: is the name of the file to create.
 * @text_content: is a NULL terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	size_t len = _strlen(text_content);
	size_t bytes_wrote = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_TRUNC | O_CREAT, 0600);
	if (fd == -1)
		return (-1);

	bytes_wrote = write(fd, text_content, len);

	if (bytes_wrote != len)
		return (-1);


	close(fd);
	return (1);
}


/**
 * _strlen - A function that returns the length of a string..
 *
 * Description: A function that returns the length of a string.
 * @s: the string that you want to count...
 *
 * Return: The length of the string
 */

size_t _strlen(char *s)
{
	size_t i = 0;

	if (!s)
		return (0);

	for (; s[i] != '\0'; i++)
		;

	return (i);
}
