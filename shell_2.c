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
	size_t buflen = 0;
	char *buffer = NULL, **argv = NULL;

	if (ac == 2)
	{
		execute_from_file(av[1]);
		return (0);
	}
	while (1)
	{
		if (interactive && isatty(STDIN_FILENO))
			_puts("$ ");
		buffer = _getline();
		/*bytes = getline(&buffer, &buflen, stdin);
		if (bytes == -1)
		{
			free(buffer);
			continue;
		}*/
		buflen = _strlen(buffer);
		if (buffer[buflen - 1] == '\n')
			buffer[buflen - 1] = '\0';
		remove_spaces(buffer);
		delete_comments(buffer);
		if (_strlen(buffer) == 0)
			continue;
		argv = split_string(buffer, " \t\n");
		if (check_builtin(argv))
			continue;
		handle_path(argv, buffer);
		execute_command(argv);

		free(buffer);
		buffer = NULL;
		/*free(argv);
		argv = NULL;*/
	}
	/*free(buffer);*/
	return (0);
}
