#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @s: The string to be converted
 *
 * Return: The converted integer
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int i = 0;

	/* Check for negative sign */
	if (s[0] == '-')
	{
		sign = -1;
		i++;
	}

	/* Iterate through the string */
	while (s[i] != '\0')
	{
		/* Check for non-digit characters */
		if (s[i] < '0' || s[i] > '9')
			break;

		/* Convert character to integer */
		result = result * 10 + (s[i] - '0');

		i++;
	}

	return (sign * result);
}
