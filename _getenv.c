#include "shell.h"

char *_getenv(const char *name)
{
	extern char **environ;
	int i;
	char *token;

	i = 0;
	while (environ[i])
	{
		token = strtok(environ[i], "="); //split_string()
		if (strcmp(token, name) == 0) //_strcmp()
		{
			return (strtok(NULL, "="));
		}
		i++;
	}
	return (NULL);
}

void main(void)
{
	char *homevalue = _getenv("HOME");

	printf("%s\n", homevalue);
	//_puts(homevalue);
}
