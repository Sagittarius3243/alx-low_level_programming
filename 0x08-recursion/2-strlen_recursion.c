#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string recursively.
 * @s: The string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0); /* Base case: reached the end of the string */
	}

	return (1 + _strlen_recursion(s + 1)); /* Recursively call with next char */
}
