#include "dog.h"
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

/**
 * new_dog - a function that creates a new dog.
 *
 * Description: a function that creates a new dog.
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 *
 * Return: A new dog
 */


dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *puppy;

	if (!name || age < 0 || !owner)
		return (NULL);

	puppy = malloc(sizeof(dog_t));
	if (!puppy)
		return (0);

	puppy->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (!puppy->name)
	{
		free(puppy);
		return (0);
	}

	puppy->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (!puppy->owner)
	{
		free(puppy->name);
		free(puppy);
		return (0);
	}

	_strcpy(puppy->name, name);
	_strcpy(puppy->owner, owner);
	puppy->age = age;

	return (puppy);
}

/**
 * _strcpy - a function that copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer pointed to by dest.
 *
 * Description: a function that copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer pointed to by dest.
 *
 * @dest: the destination that you want to store src in it.
 * @src: the string.
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (; src[i]; i++)
		dest[i] = src[i];

	dest[i] = '\0';

	return (dest);
}


/**
 * _strlen - A function that returns the length of a string..
 *
 * Description: A function that returns the length of a string.
 * @s: the string that you want to count...
 *
 * Return: The length of the string
 */

int _strlen(char *s)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
		;

	return (i);
}

