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
	int i = 0;
	char *path = _getenv("PATH");
	char **directories;
	printf("before dir declaration \n");
	//printf("directories[0] before : %s\n" ,directories[i] );
	directories = split_string(path, ":");
	printf("after dir declaration \n");
	char *command_possible_path;
	printf("directories[0] after : %s\n" ,directories[i] );
	while (directories[i] != NULL)
	{
		printf("directories[%d] : %s\n" ,i ,directories[i] );
		command_possible_path = "";
		command_possible_path = str_concat(directories[i], "/");
		printf("command_possible_path : %s\n" ,command_possible_path );
		command_possible_path = str_concat(command_possible_path, command);
		printf("command_possible_path : %s\n" ,command_possible_path );
		if (access(command_possible_path, F_OK) == 0)
			return (command_possible_path);
		i++;
	}
//	free(directories);
	return (command);
}
