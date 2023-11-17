#include "main.h"



/**
 * _isalpha - checks for alphabetic character.
 *
 * Description: checks for alphabetic character.
 * @c: the character that we want to check
 *
 * Return: Always 1 (Success)
 */

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}


