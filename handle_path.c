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
	char *path = NULL;

	path = malloc(_strlen("/bin/") + _strlen(bf) + 1);
	if (!path)
		return (NULL);
	_strcpy(path, "/bin/");
	if (bf[0] != '/' && bf[0] != '.')
	{
		argv[0] = _strcat(path, bf);
		path = NULL;
		return (argv[0]);
	}
	free(path);
	return (bf);
}
