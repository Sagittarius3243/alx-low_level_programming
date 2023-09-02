#include "main.h"

/**
 * _strstr - locates a substring in a string
 * @haystack: pointer to the string to search in
 * @needle: pointer to the substring to find
 *
 * Return: pointer to the first occurrence of `needle` in `haystack`,
 * or NULL if `needle` is not found
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
