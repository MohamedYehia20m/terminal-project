#include "shell.h"

/**
 * myCd - change directory
 * @argv: pointer to buffer
 *
 *  Return: void
 */
void myCd(char **argv)
{
	char *dest;
	char *cur, buffer[WRITE_BUF_SIZE];

	if (argv[2] != NULL)
	{
		perror("too many arguments");
		return;
	}
	if (argv[1] == NULL || _strcmp(argv[1], "~") == 0)
		dest = _getenv("HOME");
	else if (_strcmp(argv[1], "-") == 0)
		dest = _getenv("OLDPWD");
	else
		dest = argv[1];
	cur = getcwd(buffer, WRITE_BUF_SIZE);
	if (chdir(dest) == 0)
	{
		setenv("OLDPWD", cur, 1);
		cur = getcwd(buffer, WRITE_BUF_SIZE);
		setenv("PWD", cur, 1);
	}
	/*
	else
		perror("can't cd to this path");
	*/
}
