#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of the program.
 * @ac: The argument count.
 * @av: An array of strings containing the arguments.
 *
 * Return: A pointer to the concatenated string, or NULL on failure.
 */
char *argstostr(int ac, char **av)
{
	char *concat_str;
	int i, j, total_len = 0;
	int k = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			total_len++;
		total_len++; /* Add one for the '\n' character */
	}

	/* Add one more for the null terminator */
	total_len++;

	concat_str = malloc(total_len * sizeof(char));
	if (concat_str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			concat_str[k] = av[i][j];
			k++;
		}
		concat_str[k] = '\n';
		k++;
	}
	concat_str[k] = '\0';

	return (concat_str);
}
