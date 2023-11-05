#include "main.h"



char **strtow(char *str)
{
	char **arr;
	int i, j;

	if (str == NULL || str == "")
	{
		return (0);
	}

	int len = strlen(str);

	for (i = 0; i <= len; i++)
	{
		if (str[i] != ' ')
		{
			for (j = 0; str[i] != ' ', j++)
			{

			}
		}
	}
}
