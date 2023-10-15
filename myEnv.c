#include "shell.h"

void myEnv(__attribute__((unused)) char **argv)
{
	extern char **environ;
 	int i;

	i = 0;
	while (environ[i])
	{
		 _puts(environ[i++]);
		 _putchar('\n');
	}
}
