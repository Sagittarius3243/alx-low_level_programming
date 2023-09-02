#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: pointer to the string to be converted
 *
 * Return: the integer value of the converted string
 */
int _atoi(char *s)
{
	int sign = 1; /* To handle negative numbers */
	int result = 0;
	int i = 0;

	/* Check for a negative sign */
	if (s[0] == '-')
	{
		sign = -1;
		i++;
	}

	/* Process each character in the string */
	while (s[i] != '\0')
	{
		/* Check if the character is a digit */
		if (s[i] >= '0' && s[i] <= '9')
		{
			/* Update the result by multiplying it by 10 and adding the digit */
			result = result * 10 + (s[i] - '0');
		}
		else
		{
			/* If a non-digit character is encountered, stop parsing */
			break;
		}

		i++;
	}

	/* Apply the sign to the result and return */
	return (sign * result);
}
