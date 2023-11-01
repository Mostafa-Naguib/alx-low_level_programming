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

	len1 = strlen(s1);
	len2 = strlen(s2);

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
