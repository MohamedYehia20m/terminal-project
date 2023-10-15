#include "shell.h"

/**
 * myExit - exits the shell
 * @argv: pointer to buffer
 *
 *  Return: (void) exits with a given status exit code
 */
void myExit(char **argv)
{
	int status = 0;

	if (argv[1] != NULL)
		status = _atoi(argv[1]);
	free(argv);
	exit(status);
}
