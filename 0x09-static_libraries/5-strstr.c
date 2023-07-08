#include "main.h"
#include <stddef.h>

/**
 * _strstr - Locates a substring in a string
 * @haystack: The string to search in
 * @needle: The substring to search for
 *
 * Return: Pointer to the beginning of the substring if found,
 *         NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *start = haystack;
		char *sub = needle;

		while (*haystack && *sub && *haystack == *sub)
		{
			haystack++;
			sub++;
		}

		if (!*sub)
			return (start);

		haystack = start + 1;
	}

	return (NULL);
}
