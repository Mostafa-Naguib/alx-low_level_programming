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
	unsigned int len2;

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


	
	str = malloc(len1 + n + 1);
	if (str == 0)
	{
		return (0);
	}

	for (i = 0; i < memory; i++)
	{
		if (len1 + len2 < memory)
			break;

		if (i < len1)
		{
			str[i] = s1[i];
		}
		else
		{
			str[i] = s2[i - len1];
		}
	}

	str[memory + 1] = '\0';

	return (str);

}
