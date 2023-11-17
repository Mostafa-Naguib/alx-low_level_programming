#include "main.h"


/**
 * _islower  - checks for lowercase character.
 *
 * Description: checks for lowercase character.
 * @c: The character that we want to check
 *
 * Return: 0 (not lower case) 1 (is lower case)
 */


int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
