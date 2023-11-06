#include "dog.h"

/**
 * init_dog - A function that initialize a variable of type struct dog
 *
 * Description: A function that initialize a variable of type struct dog
 * @d: The dog struct..
 * @name: The name of a dog
 * @age: The age of a dog
 * @owner: The owner of the dog
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
