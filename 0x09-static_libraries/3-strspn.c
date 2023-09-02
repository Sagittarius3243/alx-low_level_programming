#include "main.h"

/**
 * _strspn - calculates the length of the initial segment
 *            of a string that consists of only given bytes
 * @s: pointer to the string to be searched
 * @accept: pointer to the string containing bytes to match
 *
 * Return: the number of bytes in the initial segment of `s`
 *         which consist only of bytes from `accept`
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int match;

	while (*s)
	{
		match = 0;
		while (*accept)
		{
			if (*s == *accept)
			{
				count++;
				match = 1;
				break;
			}
			accept++;
		}
		if (match == 0)
			break;
		s++;
	}
	return (count);
}
