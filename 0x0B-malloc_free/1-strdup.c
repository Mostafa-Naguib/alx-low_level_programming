#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * Description: returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: The string...
 *
 * Return: (The new string)
 */

char *_strdup(char *str)
{
	int len = malloc(sizeof(str) * sizeof(char));
	char *string = malloc(len + 1);

	if (string == NULL)
	{
		return (NULL);
	}

	if (str == NULL)
	{
		return (NULL);
	}

	strcpy(string, str);

	return (string);
}
