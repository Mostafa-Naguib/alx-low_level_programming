#include "main.h"

int _strlen(char *s);

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

	unsigned int i, j;
	char *str;
	unsigned int memory;
	unsigned int len1;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = _strlen(s1);

	memory = len1 + n;

	str = malloc(memory + 1);
	if (str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		str[i] = s1[i];

	for (j = 0; j < memory; j++)
	{
		str[i] = s2[j];
		i++;
	}

	str[memory + 1] = '\0';

	return (str);

}


#include "main.h"

/**
 * _strlen - A function that returns the length of a string..
 *
 * Description: A function that returns the length of a string.
 * @s: the string that you want to count...
 *
 * Return: The length of the string
 */


int _strlen(char *s)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
		;

	return (i);
}

