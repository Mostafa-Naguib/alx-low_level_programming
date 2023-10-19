#include "main.h"


/**
 * cap_string - a function that capitalizes
 * all words of a string.
 *
 * Description: a function that capitalizes all words of a string.
 * @s: The string
 *
 * Return: (s) (Success)
 */


char *cap_string(char *s)
{
	char *separator =  " ,;.!?(){}\n\t\"";
	int i = 0;
	int j;
	int length_1 = strlen(s);
	int length_2 = strlen(separator);

	for (; i < length_1; i++)
	{
		for (j = 0; j < length_2; j++)
		{
			if (s[i] == separator[j])
			{
				s[i + 1] = toupper(s[i + 1]);
			}
		}
	}

	return (s);
}

