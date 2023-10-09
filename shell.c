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
	char *buffer = NULL;
	int status;
	char **argv;
	pid_t child_pid;

	while (1)
	{
		/*_puts(_getenv("USER"));
		_putchar('@');
		_puts(_getenv("NAME"));
		_putchar(':');
		_puts(_getenv("PWD"));*/
		_puts("$ ");
		buffer = _getline();
		buffer = delete_comments(buffer);
		/*
		if (check_spaces_input(buffer) == 1)
		{
			_putchar('\n');
			continue;
		}
		*/
		argv = split_string(buffer," \t\n");
		/* TODO */
		argv[0] = check_command(argv[0]);
		child_pid = fork();
		if (child_pid == 0)
		{
			if (execve(argv[0], argv, NULL) == -1)
				perror(argv[0]);
		}
		else
		{
			wait(&status);
		}
		free(argv);
	}
}
