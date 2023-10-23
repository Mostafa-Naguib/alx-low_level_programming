#include "main.h"

/**
 * _strspn - A function that gets the length of a prefix substring.
 *
 * Description: a function that gets the length of a prefix substring.
 * @s: The string that you want to search in...
 * @accept: The pattern that you want to search for...
 *
 * Return: Always 0 (Success)
 */

unsigned int _strspn(char *s, char *accept)
{

	int n = strspn(s, accept);

	return (n);
}

