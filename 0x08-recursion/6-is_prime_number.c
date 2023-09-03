#include "main.h"

/**
 * is_prime_check - Helper function to check if a number is prime
 * @n: The number to check
 * @i: The current divisor to check
 *
 * Return: 1 if the number is prime, 0 otherwise
 */
int is_prime_check(int n, int i)
{
	if (i <= 1)
		return (1); /* It's a prime number */
	if (n % i == 0)
		return (0); /* Not a prime number */
	return (is_prime_check(n, i - 1)); /* Continue with the next divisor */
}

/**
 * is_prime_number - Checks if a number is prime
 * @n: The number to check
 *
 * Return: 1 if the number is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0); /* Not a prime number */
	return (is_prime_check(n, n - 1)); /* Start checking from largest divisor */
}
