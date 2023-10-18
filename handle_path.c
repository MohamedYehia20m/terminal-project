#include "shell.h"

/**
 * handle_path - handle the path function
 * @argv: Arguments array
 * @bf: pointer to the buffer
 *
 * Return: full path for the command
 */

char *handle_path(char **argv, char *bf)
{
	static char path[100];  /* Assuming a maximum path length of 100 characters */
	char *result = NULL;

	if (bf[0] != '/' && bf[0] != '.')
	{
		_strcpy(path, "/bin/");
		result = _strcat(path, bf);
		argv[0] = result;
		return (argv[0]);
	}
	return (bf);
}
