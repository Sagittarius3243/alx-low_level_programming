/**
 * check_divisor - Checks if a number is divisible by any divisor.
 * @n: The number to check.
 * @divisor: The current divisor to check.
 *
 * Return: 1 if the number is divisible by a divisor, 0 otherwise.
 */
int check_divisor(int n, int divisor)
{
	if (n % divisor == 0) /* Base case: number is divisible */
		return (0);

	if (divisor > n / 2) /* Base case: no divisor found */
		return (1);

	return (check_divisor(n, divisor + 1)); /* Recursive call */
}

/**
 * is_prime_number - Checks if a number is a prime number.
 * @n: The number to check.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n <= 1) /* Base case: numbers less than or equal to 1 are not prime */
		return (0);

	return (check_divisor(n, 2));
}

