#include "main.h"

/**
 * _strncpy - copies a string up to n bytes
 * @dest: destination buffer
 * @src: source string
 * @n: maximum number of bytes to copy
 *
 * Return: pointer to the destination buffer `dest`
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	/* If the source string is shorter than n, pad with null bytes */
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
