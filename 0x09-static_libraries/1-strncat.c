#include "main.h"

/**
 * _strncat - concatenates two strings with a specified number of characters
 * @dest: destination string
 * @src: source string
 * @n: maximum number of characters to concatenate from src
 *
 * Return: pointer to the destination string `dest`
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i;

	/* Find the length of dest */
	while (dest[dest_len] != '\0')
		dest_len++;

	/* Concatenate src to dest, limited by n or until src ends */
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len] = src[i];
		dest_len++;
	}

	dest[dest_len] = '\0';

	return (dest);
}
