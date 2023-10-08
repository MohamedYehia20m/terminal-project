#include "shell.h"

extern char **environ;

int main(void)
{
	int  i = 0;

	while (environ[i] != NULL)
	{
		_puts(environ[i]);
		_putchar('\n');
		i++;
	}
}
