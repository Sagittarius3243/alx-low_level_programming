#include <stdio.h>
#include "main.h"

/**
 * add_digits - Adds two digits with a carry.
 * @digit1: The first digit.
 * @digit2: The second digit.
 * @carry: The carry value.
 * @result: Pointer to store the result.
 *
 * Return: The carry value.
 */
int add_digits(int digit1, int digit2, int carry, int *result)
{
	int sum = digit1 + digit2 + carry;

	*result = sum % 10;
	return (sum / 10);
}

/**
 * reverse_string - Reverses a string.
 * @str: The string to reverse.
 * @length: The length of the string.
 */
void reverse_string(char *str, int length)
{
	int start = 0;
	int end = length - 1;

	while (start < end)
	{
		char temp = str[start];
		str[start] = str[end];
		str[end] = temp;
		start++;
		end--;
	}
}

/**
 * infinite_add - Adds two numbers.
 * @n1: The first number as a string.
 * @n2: The second number as a string.
 * @r: The buffer to store the result.
 * @size_r: The size of the buffer.
 *
 * Return: A pointer to the result (r) or 0 if the result cannot be stored.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1, len2, i, j, carry, sum;
	int max_length = size_r - 1;

	for (len1 = 0; n1[len1] != '\0'; len1++)
		;
	for (len2 = 0; n2[len2] != '\0'; len2++)
		;

	if (len1 >= max_length || len2 >= max_length)
		return (0);

	carry = 0;
	i = len1 - 1;
	j = len2 - 1;
	r[max_length] = '\0';

	while (i >= 0 || j >= 0 || carry > 0)
	{
		int digit1 = (i >= 0) ? (n1[i] - '0') : 0;
		int digit2 = (j >= 0) ? (n2[j] - '0') : 0;

		carry = add_digits(digit1, digit2, carry, &sum);

		if (max_length <= 1)
			return (0);

		r[max_length - 1] = sum + '0';

		i--;
		j--;
		max_length--;
	}

	reverse_string(r, size_r - max_length);

	return (r + (size_r - max_length));
}
