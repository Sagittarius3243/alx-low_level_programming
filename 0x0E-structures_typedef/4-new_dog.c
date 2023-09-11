#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog, or NULL if memory allocation fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *name_copy, *owner_copy;

	/* Allocate memory for the dog structure */
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	/* Allocate memory for the name and owner strings */
	name_copy = malloc(sizeof(char) * (strlen(name) + 1));
	owner_copy = malloc(sizeof(char) * (strlen(owner) + 1));

	if (name_copy == NULL || owner_copy == NULL)
	{
		/* If allocation fails, free any allocated memory and return NULL */
		free(new_dog);
		free(name_copy);
		free(owner_copy);
		return (NULL);
	}

	/* Copy name and owner strings to the new memory */
	strcpy(name_copy, name);
	strcpy(owner_copy, owner);

	/* Assign the copied strings to the dog structure */
	new_dog->name = name_copy;
	new_dog->age = age;
	new_dog->owner = owner_copy;

	return (new_dog);
}
