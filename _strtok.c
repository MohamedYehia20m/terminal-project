#include "shell.h"

/**
 * split_string - function that split string into array of words
 * @str: string to be split
 *
 * Description: the functions splits string into array of words using
 * strtok() function based on standard delimeter " ".
 *
 * Return: array of words.
 */

char **split_string(char *str)
{
	int num_words = 0;
	char **words = malloc(sizeof(char *) * 100);
	char *token = strtok(str, " ");

	while (token != NULL)
	{
		words[num_words] = token;
		num_words++;
		token = strtok(NULL, " ");
	}
	return (words);
}

