#include "shell.h"

/**
 * _getenv - function that return the value of given environment variable
 * @name: name of environment variable
 *
 * Return: value of environment variable
 */

char *_getenv(char *name)
{
	int i;
	char *token;

	i = 0;
	while (environ[i])
	{
		token = strtok(environ[i++], "=");
		if (_strcmp(token, name) == 0)
			return (strtok(NULL, "="));
	}
	return (NULL);
}
