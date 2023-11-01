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
	int size = 0;
	char *space;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}

	for (; str[size] != '\0'; size++)
	;


	space = malloc(size * sizeof(str) + 1);

	if (space == NULL)
		return (0);

	for (i = 0; i < size; i++)
		space[i] = str[i];

	return (space);
}
