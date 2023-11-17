#include "main.h"



/**
 * _isupper - checks for uppercase character.
 *
 * Description: checks for uppercase character.
 * @c: The character
 *
 * Return: 1 (when it is upper) 0 (when it is not)
 */


int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}

