#include "shell.h"

/**
 * check_builtin - checks if the command one of the builtin functions
 * @argv: pointer to buffer
 *
 *  Return: 0 if inputs is not builtin functio
 *	1 if yes
 */
int check_builtin(char **argv)
{
	int i;
	builtin_t builtinArr[] = {
		{"exit", myExit},
		{"env", myEnv},
		{"cd", myCd},
		{NULL, NULL}
	};

	for (i = 0; builtinArr[i].cmd; i++)
		if (_strcmp(argv[0], builtinArr[i].cmd) == 0)
		{
			builtinArr[i].func(argv);
			return (1);
		}
	return (0);
}
