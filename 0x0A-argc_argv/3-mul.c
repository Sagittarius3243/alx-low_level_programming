#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 *
 * Return: 0 if successful, 1 if there are not enough arguments
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]); /* Convert the first argument to an integer */
	num2 = atoi(argv[2]); /* Convert the second argument to an integer */

	result = num1 * num2;
	printf("%d\n", result);

	return (0);
}
