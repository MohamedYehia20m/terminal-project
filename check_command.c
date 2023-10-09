#include "shell.h"

/**
 * check_command - check if the command exists
 * @command: command to be checked
 *
 * Return: the full path.
 *	if not exist return NULL.
 */
char *check_command(char *command)
{
	char *path = _getenv("PATH");
	char **directories = split_string(path, ":");
	char *command_possible_path;
	int i = 0;

	while (directories[i] != NULL)
	{
		command_possible_path = "";
		command_possible_path = str_concat(directories[i], "/");
		command_possible_path = str_concat(command_possible_path, command);
		if (access(command_possible_path, F_OK) == 0)
			return (command_possible_path);
		i++;
	}
	return (command);
}
