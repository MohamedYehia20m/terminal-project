#include "shell.h"

/**
 * command_handler - handle command execution
 * @argv: Arguments array
 * @buffer: pointer to the buffer
 *
 *  Return: void
 */
void command_handler(char **argv, char *buffer)
{
	buffer = remove_spaces(buffer);
	buffer = delete_comments(buffer);
	if (_strlen(buffer) == 0)
		return;
	argv = split_string(buffer, " \t\n");
	if (check_builtin(argv))
		return;
	handle_path(argv, buffer);
	execute_command(argv);
}
