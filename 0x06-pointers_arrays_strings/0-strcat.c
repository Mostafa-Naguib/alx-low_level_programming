#include "main.h"


/**
 * _strcat - A function that concatenates two strings.
 *
 * Description: A function that concatenates two strings.
 * @dest: the string that you want to append to...
 * @src: the string that you want to be appended...
 *
 * Return: (dest)
 */


char *_strcat(char *dest, char *src)
{
	int i = 0;
	int len1;
	int len2;

	for (len1 = 0; dest[len1] != '\0'; len1++)
		;

	for (len2 = 0; src[len2] != '\0'; len2++)
		;

	for (i = 0; i < len2; i++)
	{
		dest[len1 + i] = src[i];
	}

	return (dest);
}

