#include <stddef.h>
#include "function_pointers.h"

/**
 * print_name - prints a name using a given function
 * @name: pointer to a string (name)
 * @f: function pointer that takes a char pointer as argument and returns void
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
