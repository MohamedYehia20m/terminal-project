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
		_puts("#cisfunc$ ");
		buffer = _getline();
		argv = split_string(buffer);
			child_pid = fork();
		if (child_pid == 0)
		{
			if (execve(argv[0], argv, NULL) == -1)
				perror("Error");
		}
		else
		{
			wait(&status);
		}
		free(argv);
	}
}
