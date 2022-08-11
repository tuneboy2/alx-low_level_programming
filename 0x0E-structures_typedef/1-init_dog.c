#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Initialize the variables of type struct dog
 * @d: Pointer to Variable to be initialized
 * @name: Name of dog to be initialized
 * @age: Age of dog
 * @owner: Owner of dog
 *
 * Return: Void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
