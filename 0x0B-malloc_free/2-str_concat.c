#include "main.h"

/**
 * str_concat - A function that concatenates two strings.
 *
 * Description: A function that concatenates two strings.
 * @s1: The first string
 * @s2: The second string
 *
 * Return: the result of combining the two string
 */


char *str_concat(char *s1, char *s2)
{
	int len1 = sizeof(s1) * sizeof(s1[1]);
	int len2 = sizeof(s2) * sizeof(s2[1]);

	char *new = malloc(len1 + len2 + 1);

	if (new == NULL)
	{
		return (NULL);
	}

	strcpy(new, s1);
	strcat(new, s2);

	return (new);
}
