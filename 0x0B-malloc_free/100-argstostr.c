#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of a program
 * @ac: The argument count
 * @av: The argument vector
 *
 * Return: A pointer to the concatenated string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, len, total_len = 0, index = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		len = 0;
		while (av[i][len])
		{
			len++;
			total_len++;
		}
		total_len++;
	}

	str = malloc(sizeof(char) * (total_len + 1));

	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		len = 0;
		while (av[i][len])
		{
			str[index++] = av[i][len++];
		}
		str[index++] = '\n';
	}

	str[total_len] = '\0';

	return (str);
}
