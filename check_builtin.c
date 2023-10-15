#include "shell.h"

/**
 * check_builtin - checks if the command one of the builtin functions
 * @argv: pointer to buffer
 *
 *  Return: void
 */
void check_builtin(char **argv)
{
	int i;
	builtin_t builtinArr[] = {
		{"exit", myExit},
		{"env", myEnv},
		{NULL, NULL}
	};

	for (i = 0; builtinArr[i].cmd; i++)
		if (_strcmp(argv[0], builtinArr[i].cmd) == 0)
			builtinArr[i].func(argv);
}
