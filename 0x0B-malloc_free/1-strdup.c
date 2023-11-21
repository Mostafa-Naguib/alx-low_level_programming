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
	int size;
	char *space, *tmp_space;

	if (str == NULL)
		return (NULL);

	for (size = 0; str[size] != '\0'; size++)
	;


	space = malloc(size * sizeof(str[1]) + 1);
	if (space == NULL)
		return (0);

	while (*tmp_space != '\0')
	{
		tmp_space = space;
		*tmp_space++ = *str++;
		str++;
		tmp_space++;
	}

	return (space);
}

