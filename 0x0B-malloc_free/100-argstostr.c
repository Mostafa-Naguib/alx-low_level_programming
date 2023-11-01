#include "main.h"

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

	for (i = 1; i < ac; i++, len++)
	{
		len += strlen(av[i]);
	}
	string = malloc(len + 1);
	if (string == 0)
		return (NULL);

	for (i = 1; i < ac; i++)
	{
		int word = strlen(av[i]);

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
