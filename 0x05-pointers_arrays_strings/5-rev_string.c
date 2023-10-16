#include "main.h"

/**
 * rev_string - A function that reverses a string.
 *
 * Description: A function that reverses a string.
 * @s: Takes the string that you want to change it reversibly...
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
    char s[10] = "My School";

    printf("%s\n", s);
    rev_string(s);
    printf("%s\n", s);
    return (0);
}

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

