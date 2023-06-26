#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: Pointer to the string.
 */
void rev_string(char *s)
{
	int i, j;
	char temp;

	/* Find the length of the string */
	for (i = 0; s[i] != '\0'; i++)
		;

	/* Reverse the string using two pointers */
	for (i -= 1, j = 0; i > j; i--, j++)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
