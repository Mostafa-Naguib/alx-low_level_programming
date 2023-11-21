#include "main.h"
int _strlen(char *s);

/**
 * *argstostr - A function that concatenates all the arguments of your program.
 *
 * Description: A function that concatenates all the arguments of your program.
 * @ac: the number of argument
 * @av: a list of argument
 *
 * Return: The string...
 */



char *argstostr(int ac, char **av)
{
	int i, j = 0, k;
	int len = 0;
	char *string;

	if (ac == 0 || av == 0)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++, len++)
	{
		len += _strlen(av[i]);
	}

	string = malloc(sizeof(char) * len + 1);
	if (string == 0)
		return (NULL);


	for (i = 0; i < ac; i++)
	{
		int word = _strlen(av[i]);

		for (k = 0; k < word; k++, j++)
		{
			string[j] = av[i][k];
		}
		string[j] = '\n';
		j++;
	}

	string[j] = '\0';
	return (string);
}


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

