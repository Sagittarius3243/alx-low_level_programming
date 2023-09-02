#include "main.h"

/**
 * _strcpy - copies a string including the null byte
 * @dest: destination buffer
 * @src: source string
 *
 * Return: pointer to `dest`
 */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0'; /* Add the null terminator at the end */

	return (start);
}
