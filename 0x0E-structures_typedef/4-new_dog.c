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

int main(void)
{
    dog_t *my_dog;

    my_dog = new_dog("Poppy", 3.5, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);
    return (0);
}


dog_t *new_dog(char *name, float age, char *owner)
{
	int len_name;
	int len_owner;

	if (!name || age < 0 || !owner)
		return (NULL);

	len_name = _strlen(name) + 1;
	len_owner = _strlen(owner) + 1;

	dog_t *puppy;

	puppy->name = malloc(len_name);
	puppy->owner = malloc(len_owner);
	_strcpy(puppy->name, name);
	_strcpy(puppy->owner, owner);
	puppy->age = age;

	return (puppy);
}



char *_strcpy(char *dest, char *src)
{
	unsigned int i = 0;
	unsigned int l;

	for (l = 0; src[l] != '\0'; l++)
		;

	for (; i <= l; i++)
		dest[i] = src[i];

	return (src);
}


int _strlen(char *s)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
		;

	return (i);
}

