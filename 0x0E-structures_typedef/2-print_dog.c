#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Prints the details of a dog
 * @d: Pointer to a struct dog
 *
 * Description: This function prints the name, age, and owner of a dog. If any
 * of these elements are NULL, it prints "(nil)" instead.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %.6f\n", d->age);
		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
