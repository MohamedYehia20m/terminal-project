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
			_puts("$ "); // write(STDOUT_FILENO, "$ ", _strlen("$ "));
		// signal(SIGINT, sig_handler);
		buffer = _getline(); // getline(&cmd, &n, stdin);
		/*
		if (num_c == -1) // handles the end file case
		{
			free(cmd);
			exit(EXIT_SUCCESS);
		}
		*/
		buflen = _strlen(buffer);
		if (buffer[buflen - 1] == '\n')
			buffer[buflen - 1] = '\0';
		buffer = remove_spaces(buffer); // trim(cmd);
		if (_strlen(buffer) == 0)
			continue;
		/*
		i = 0;
		argv[i] = strtok(buffer, " \n");
		// handle_exit(cmd);
		handle_path(argv, cmd);
		while (argv[i])
		{
			i++;
			argv[i] = strtok(NULL, " \n");
		}
		*/
		argv = split_string(buffer, " \t\n");
		handle_path(argv, buffer);
		// runcmd(argv, av, envp);
		execute_command(argv);
	}
	free(buffer);
	return (0);
}
