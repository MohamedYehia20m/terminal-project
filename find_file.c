#include "shell.h"

void check_command(char *command)
{
	if (access(command, F_OK) == 0)
		_puts("File Exist\n");
	else
		_puts("File Doesn't Exist\n");
}

int main(void)
{
	char *buffer = NULL;
	char **argv;
	int i;

	while (1)
	{
		i = 1;
		_puts("CISFUN$ ");
		buffer = _getline();
		argv = split_string(buffer , " \t\n");
		if (_strcmp(argv[0], "_which") == 0)
		{
			while (argv[i])
			{
				_puts(argv[i]);
				_puts(" : ");
				check_command(argv[i]);
				i++;
			}
		}
		else
		{
			_puts("Command Doesn't Exist\n");
		}	
	}
	free(argv);
	return (0);
}
