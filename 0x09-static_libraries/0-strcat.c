#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: Destination string
 * @src: Source string
 *
 * Return: Pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = 0;
	int i;

	/* Calculate the length of the destination string */
	while (dest[dest_len] != '\0')
		dest_len++;

	/* Append the source string to the destination string */
	for (i = 0; src[i] != '\0'; i++)
		dest[dest_len++] = src[i];

	/* Add the null terminator */
	dest[dest_len] = '\0';

	return (dest);
}
