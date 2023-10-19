#include "main.h"


/**
 * _strcat - A function that concatenates two strings.
 *
 * Description: A function that concatenates two strings.
 * @dest: the string that you want to append to...
 * @src: the string that you want to be appended...
 *
 * Return: (dest)
 */


char *_strcat(char *dest, char *src)
{
	int i = 0;
    int length_1 = strlen(dest);
    int length_2 = strlen(src);

    for (i = 0; i < length_2; i++)
    {
        dest[length_1 + i] = src[i];
    }

	return (dest);

}

