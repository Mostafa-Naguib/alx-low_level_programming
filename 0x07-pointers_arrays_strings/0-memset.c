#include "main.h"


/**
 * _memset - A function that fills memory with a constant byte.
 *
 * Description: a function that fills memory with a constant byte.
 * @s: array of type char
 * @b: constant byte
 * @n: the number of byte that you want to change
 *
 * Return: a pointer to the memory area s
 */


char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n-- > 0)
	{
		*ptr++ = b;
	}

	return (s);
}


