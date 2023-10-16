#include "main.h"

/**
 * rev_string - A function that reverses a string.
 *
 * Description: A function that reverses a string.
 * @s: Takes the string that you want to change it reversibly...
 *
 */


void rev_string(char *s)
{
	int i = strlen(s) - 1;
	char *ptr = malloc(i + 1);

	strcpy(ptr, s);
	for (; i >= 0; i--)
	{
		s[strlen(s) - i - 1] = ptr[i];
	}
	s[strlen(s)] = '\0';
}

