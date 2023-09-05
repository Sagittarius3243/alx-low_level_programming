#include <stdlib.h>
#include "main.h"

/**
 * count_words - Count the number of words in a string.
 * @str: The input string.
 *
 * Return: The number of words in the string.
 */
int count_words(char *str)
{
	int count = 0;
	int in_word = 0;

	while (*str)
	{
		if (*str == ' ')
			in_word = 0;
		else if (in_word == 0)
		{
			in_word = 1;
			count++;
		}
		str++;
	}
	return (count);
}

/**
 * strtow - Splits a string into words.
 * @str: The input string.
 *
 * Return: A pointer to an array of strings (words), or NULL if failed.
 */
char **strtow(char *str)
{
	char **words;
	int num_words, i, j, len;

	if (str == NULL || *str == '\0' || count_words(str) == 0)
		return (NULL);

	num_words = count_words(str);

	words = malloc((num_words + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	for (i = 0; i < num_words; i++)
	{
		while (*str == ' ')
			str++;
		len = 0;
		while (*(str + len) != ' ' && *(str + len) != '\0')
			len++;

		words[i] = malloc((len + 1) * sizeof(char));
		if (words[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(words[j]);
			free(words);
			return (NULL);
		}

		for (j = 0; j < len; j++, str++)
			words[i][j] = *str;
		words[i][j] = '\0';
	}
	words[i] = NULL;

	return (words);
}
