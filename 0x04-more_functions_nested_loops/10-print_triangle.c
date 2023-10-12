#include "main.h"



/**
 * print_triangle - A function that prints a triangle, followed by a new line.
 *
 * Description: A function that prints a triangle, followed by a new line.
 * @size: is the size of the triangle.
 *
 */




void print_triangle(int size)
{
	int i;
	int j;
	int k;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for  (i = 0; i < size; i++)
	{
		int spaces = (size - i) - 1;
		int hashes = size - spaces;


		for (j = 0; j < spaces; j++)
		{
			_putchar(' ');
		}
		for (k = 0; k < hashes; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
