#include "shell.h"

/**
 * main - Entry point
 * @ac: Arguments counter
 * @av: Arguments array
 *
 * Return: Always 0 (Success)
 */
int main(int ac, char **av)
{
	int interactive = (ac == 1 && isatty(STDIN_FILENO));
	int buflen = 0;
	char *buffer = NULL, **argv;

	while (1)
	{
		if (interactive && isatty(STDIN_FILENO))
			_puts("$ ");
		buffer = _getline();
		buflen = _strlen(buffer);
		if (buffer[buflen - 1] == '\n')
			buffer[buflen - 1] = '\0';
		buffer = remove_spaces(buffer);
		buffer = delete_comments(buffer);
		if (_strlen(buffer) == 0)
			continue;
		argv = split_string(buffer, " \t\n");
		if (check_builtin(argv))
			continue;
		handle_path(argv, buffer);
		execute_command(argv);
	}
	free(buffer);
	return (0);
}
