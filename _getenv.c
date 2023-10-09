#include "shell.h"

char *_getenv(char *name)
{
	extern char **environ;
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
