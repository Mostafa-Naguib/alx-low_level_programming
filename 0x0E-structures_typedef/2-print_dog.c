#include "dog.h"

/**
 * print_dog - a function that prints a struct dog
 *
 * Description: a function that prints a struct dog
 * @d: The struct of the dog
 *
 */


void print_dog(struct dog *d)
{
	char *name;
	char *owner;
	float age;

	if (d)
	{
		name = d->name;
		owner = d->owner;
		age = d->age;

		if (name == NULL)
			name = "(nil)";
		if (!age)
		{
			printf("Name: %s\nAge: (nil)\nOwner: %s\n", name, owner);
			return;
		}
		if (owner == NULL)
			owner = "(nil)";

		printf("Name: %s\nAge: %f\nOwner: %s\n", name, age, owner);
	}
	else
		printf("nothing");
}
