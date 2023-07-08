#include "main.h"

/**
 * _strncat - Concatenates two strings, using at most n bytes from src
 * @dest: Destination string
 * @src: Source string
 * @n: Maximum number of bytes from src
 *
 * Return: Pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i;

	/* Calculate the length of the destination string */
	while (dest[dest_len] != '\0')
		dest_len++;

	/* Append the source string to the destination string */
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len++] = src[i];

	/* Add the null terminator */
	dest[dest_len] = '\0';

	return (dest);
}
