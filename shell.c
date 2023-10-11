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
		//buffer = delete_comments(buffer);
		//buffer = removeSpaces(buffer);
		//printf("%s","start");
		//printf("%s",buffer);
		//printf("%s\n","end");
		if (check_spaces_input(buffer)) //why cant i enter this f**king function
		{
			//_putchar('\n');
			//exit(127);
			//printf("%s\n","empty spaces!");
			continue;
		}
		
		argv = split_string(buffer," \t\n");
		/* TODO */
		argv[0] = check_command(argv[0]);
		child_pid = fork();
		if (child_pid == 0)
		{
			if (execve(argv[0], argv, NULL) == -1)
			{
				//printf("%s\n","execve false");
				perror(argv[0]);
			}
			//printf("%s\n","child_pid == 0");
		}
		else
		{
			wait(&status);
			//printf("%s\n","still waiting");
		}
		//printf("%s\n","before free(argv)");
		free(argv);
	}
}
