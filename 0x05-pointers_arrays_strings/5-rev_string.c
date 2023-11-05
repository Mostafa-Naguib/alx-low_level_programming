#include "main.h"

/**
 * rev_string - A function that reverses a string.
 *
 * Description: A function that reverses a string.
 * @s: Takes the string that you want to change it reversibly...
 *
 */


void print_rev(char *s)
{
	int i = 0;

	while (s [i])
		i++;

	while (i--)
	{
		_putchar (s[i] ) ;
	}
	_putchar ('\n') ;
} 
