#include "shell.h"

/**
 * check_spaces_input - check if the input is spaces only
 * @buffer: pointer to the buffer
 *
 * Return: 1 if yes
 *	0 if no
 */
int check_spaces_input(char *buffer)
{
	int i, bflen = _strlen(buffer), result;
	char *spaces;

	spaces = (char *)malloc(bflen + 1);
	if (spaces == NULL)
		exit(1);
	for (i = 0; i < bflen; i++)
		spaces[i] = ' ';
	spaces[i] = '\0';
	result = _strcmp(buffer, spaces) == 0 ? 1 : 0 ;
	free(spaces);
	return (result);
}
