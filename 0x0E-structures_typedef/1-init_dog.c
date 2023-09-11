#include "dog.h"
#include <stddef.h>

/**
 * init_dog - Initializes a struct dog
 * @d: Pointer to a struct dog
 * @name: Pointer to the name of the dog
 * @age: Age of the dog
 * @owner: Pointer to the owner's name
 *
 * Description: This function initializes a struct dog with the provided values.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
