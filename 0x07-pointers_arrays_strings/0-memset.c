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
	while (*s != '\0' && n > 0)
	{
		*s = b;
		s++;
		n--;
	}

	return (s);
}


