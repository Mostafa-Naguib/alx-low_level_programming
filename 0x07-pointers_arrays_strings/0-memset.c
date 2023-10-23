#inlude "main.h"


/**
 * _memset - A function that fills memory with a constant byte.
 *
 * Description: a function that fills memory with a constant byte.
 * @s: array of type char
 * @b: constant byte
 * @n: the number of byte that you want to change
 *
 * Return: Always 0 (Success)
 */


char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, sizeof(char) * n);

	return (s);
}

