#include "dog.h"

/**
 * new_dog - Creates a new variable of type dog_t
 * @name: Name
 * @age: Age
 * @owner: Owner
 *
 * Return: A pointer to a type dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);

	new->name = name;
	new->age = age;
	new->owner = owner;

	return (new);
}
