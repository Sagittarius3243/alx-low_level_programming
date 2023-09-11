#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * is_digit - Checks if a character is a digit.
 * @c: The character to check.
 * Return: 1 if c is a digit, 0 otherwise.
 */
int is_digit(char c)
{
    return (c >= '0' && c <= '9');
}

/**
 * _puts - Prints a string.
 * @str: The string to print.
 */
void _puts(char *str)
{
    while (*str)
        _putchar(*str++);
}

/**
 * main - Multiplies two positive numbers.
 * @argc: The number of arguments.
 * @argv: The arguments array.
 * Return: 0 on success, 98 on failure.
 */
int main(int argc, char *argv[])
{
    char *result;
    
    if (argc != 3 || !is_digit(*argv[1]) || !is_digit(*argv[2]))
    {
        _puts("Error\n");
        exit(98);
    }

    result = multiply_numbers(argv[1], argv[2]);
    if (!result)
    {
        _puts("Error\n");
        exit(98);
    }

    _puts(result);
    _puts("\n");

    free(result);

    return (0);
}
