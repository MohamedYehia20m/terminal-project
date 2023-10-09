#include "shell.h"

/**
 * delete_comments - delete comments
 * @command: command to be checked
 *
 * Return: command without comments.
 */
char *delete_comments(char *command)
{
	int i = 0;

	while (command[i] != '\0')
	{
		if (command[i] == '#')
		{
			command[i] = '\0';
			break;
		}
		i++;
	}
	return (command);
}
