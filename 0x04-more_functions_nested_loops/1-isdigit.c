#include "main.h"


/**
 * _isdigit - checks for a digit (0 through 9).
 *
 * Description: checks for a digit (0 through 9).
 * @c: The character
 *
 * Return: 1 (Success)
 */



int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
