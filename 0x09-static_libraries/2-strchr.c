#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: pointer to the string
 * @c: the character to find
 *
 * Return: pointer to the first occurrence of `c` in the string `s`,
 *         or NULL if `c` is not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}

	if (*s == c)
		return (s);

	return (NULL);
}
