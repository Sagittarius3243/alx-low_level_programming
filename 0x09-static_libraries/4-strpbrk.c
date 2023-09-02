#include "main.h"

/**
 * _strpbrk - searches a string for any set of bytes
 * @s: pointer to the string to be searched
 * @accept: pointer to the string containing bytes to match
 *
 * Return: pointer to the first occurrence in `s` of any byte
 *         in `accept`, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		char *temp = accept;

		while (*temp)
		{
			if (*s == *temp)
				return (s);
			temp++;
		}
		s++;
	}
	return (NULL);
}
