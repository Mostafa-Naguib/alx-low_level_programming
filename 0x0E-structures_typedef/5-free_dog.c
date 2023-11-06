#include "dog.h"

/**
 * free_dog - a function that frees dogs.
 *
 * Description: a function that frees dogs.
 * @d: The dog struct
 *
 */

void free_dog(dog_t *d)
{
	free(d);
}
