#include "main.h"
#include <stddef.h>

/**
 * _strchr - Locates the first occurrence of a character in a string
 * @s: The string to search in
 * @c: The character to find
 *
 * Return: Pointer to the first occurrence of the character,
 *         or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}

	return (NULL);
}
