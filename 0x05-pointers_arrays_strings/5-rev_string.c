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

	while (s[l])
		l++;

	char *ptr = malloc(l + 1);

	for (i = 0; i <= l; i++)
	{
		ptr[i] = s[i];
	}

	for (i = l; i >= 0; i--)
	{
		s[l + 1 - i - 1] = ptr[i];
	}

}
