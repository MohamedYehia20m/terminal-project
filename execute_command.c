#include "shell.h"

/**
 * execute_command - executes the command
 * @argv: Arguments array
 */
void execute_command(char **argv)
{
	pid_t child_pid;
	int stat;
	/*denum *c = malloc(sizeof(struct denum));*/

	child_pid = fork();
	if (child_pid == -1)
	{
		perror("Process Error");
		exit(EXIT_FAILURE);
	}
	if (child_pid == 0)
	{
		if (execve(argv[0], argv, NULL) == -1)
		{
			_puts(argv[0]);
			_puts(": No such file or directory\n");
		}
		exit(EXIT_FAILURE);
	}
	else
	{
		wait(&stat);
	}
}
