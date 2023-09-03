#include "main.h"

/**
 * _puts_recursion - Prints a string followed by a new line recursively.
 * @s: The string to be printed.
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);            /* Print the current character */
		_puts_recursion(s + 1);  /* Recursively call the function with the next character */
	}
	else
	{
		_putchar('\n');  /* Base case: end of the string, print a new line */
	}
}
