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
	int i, len1, len2, total;
	char *new;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (len1 = 0; s1[len1] != 0; len1++)
	;

	for (len2 = 0; s2[len2] != 0; len2++)
	;

	total = len1 + len2;

	new = malloc(total + 1);
	if (new == NULL)
	{
		return (NULL);
	}


	for (i = 0; i <= total; i++)
	{
		if (i < len1)
			new[i] = s1[i];
		else
			new[i] = s2[i - len1];
	}

	return (new);
}

