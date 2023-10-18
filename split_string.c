#include "shell.h"

/**
 * split_string - function that split string into array of words
 * @str: string to be split
 * @delim: the delimiter based on which the string is tokenized
 *
 * Description: the functions splits string into array of words using
 * strtok() function based on standard delimeter " ".
 *
 * Return: array of words.
 */

char **split_string(char *str, const char *delim)
{
	static char *words[MAX_WORDS];
	int num_words = 0;
	/*char **words = malloc(sizeof(char *) * 1024);*/
	char *token = strtok(str, delim);

	while (token && (num_words < MAX_WORDS - 1))
	{
		words[num_words] = token;
		token = NULL;
		token = strtok(NULL, delim);
		num_words++;
	}
	words[num_words] = NULL;
	token = NULL;
	return (words);
}
