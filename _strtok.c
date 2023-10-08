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
	char **words = malloc(sizeof(char *) * 1024);
	char *token = strtok(str, "\t\n");

	while (token)
	{
		words[num_words] = token;
		token = strtok(NULL, "\t\n");
		num_words++;
	}
	words[num_words] = NULL;
	return (words);
}

