#include "main.h"

/**
 * string_nconcat - A function that concatenates two strings.
 *
 * Description: A function that concatenates two strings.
 * @s1: The first string
 * @s2: The second string
 * @n: The number of byte that you need to take from "s2"
 *
 *
 * Return: The string
 */



char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	int i = 0;
	char *str;
	int memory;
	int len1;
	int len2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = strlen(s1);
	len2 = strlen(s2);

	memory = len1 + n;
	
	str = malloc(memory + 1);
	if (str == NULL)
		return (NULL);

	for (i = 0; i < memory; i++)
	{
		if ((len1 + n) < i || (len1 + len2) < i)
			break;

		if (i < len1)
			str[i] = s1[i];
		else
			str[i] = s2[i - len1];
	}

	str[memory + 1] = '\0';

	return (str);

}
