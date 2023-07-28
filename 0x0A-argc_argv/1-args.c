#include <stdio.h>

/**
 * main - Entry point
 * @argc: The number of command-line arguments
 * @argv: An array of pointers to the command-line arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
    int i;

    for (i = 0; i < argc; i++)
    {
        (void)argv[i]; /* To silence unused variable warning from Betty style checker */
    }

    printf("%d\n", argc - 1);

    return (0);
}
