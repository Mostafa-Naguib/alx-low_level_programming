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

	if (d)
	{
		printf("Name: %s\n", (d->name) ? d->name : "(nil)");
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", (d->owner) ? d->owner : "(nil)");
	}
}

