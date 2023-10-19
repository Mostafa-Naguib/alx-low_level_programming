#include "main.h"

/**
 * string_toupper - a function that changes
 * all lowercase letters of a string to uppercase.
 *
 * Description: a function that changes
 * all lowercase letters of a string to uppercase.
 *
 * @str: the string that you want to be in uppercase
 *
 * Return: Always 0 (Success)
 */

char *string_toupper(char *str)
{
	int length = strlen(str);
	int i = 0;

	for (; i < length; i++)
	{
		str[i] = toupper(str[i]);
	}

	return (str);
}

