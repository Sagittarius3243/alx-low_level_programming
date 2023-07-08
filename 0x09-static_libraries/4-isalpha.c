#include "main.h"

/**
 * _isalpha - checks if a character is an alphabetic letter
 * @c: the character to be checked
 *
 * Return: 1 if c is an alphabetic letter, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
