#include "main.h"
#include <stdio.h>

/**
 * _strlen - Calculate the length of a string recursively
 * @s: The input string
 *
 * Return: Length of the string
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}

/**
 * check_palindrome - Check if a string is a palindrome recursively
 * @s: The input string
 * @len: Length of the string
 * @i: Current index
 *
 * Return: 1 if it's a palindrome, 0 otherwise
 */
int check_palindrome(char *s, int len, int i)
{
	if (i >= len)
		return (1);
	if (s[i] != s[len])
		return (0);
	return (check_palindrome(s, len - 1, i + 1));
}

/**
 * is_palindrome - Check if a string is a palindrome
 * @s: The input string
 *
 * Return: 1 if it's a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int length = _strlen(s);

	return (check_palindrome(s, length - 1, 0));
}
