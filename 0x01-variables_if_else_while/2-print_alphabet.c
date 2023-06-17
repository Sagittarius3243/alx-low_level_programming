#include <unistd.h>
/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		write(1, &letter, 1);
	}

	write(1, "\n", 1);

	return (0);
}
