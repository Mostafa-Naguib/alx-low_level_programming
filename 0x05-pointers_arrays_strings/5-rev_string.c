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
	int i;
	int l = 0;
	char tmp;

	for (l = 0; s[l] != '\0'; ++l)
		;

	for (i = 0; i < l / 2; i++)
	{
		tmp = s[i];
		s[i] = s[l - i - 1];
		s[l - i - 1] = tmp;
	}

}
