#include "shell.h"

/**
 * myEnv - function that returns all environment variables in the Environment
 * @argv: pointer to pointer (unused attribute)
 *
 * Return: void
 */

void myEnv(__attribute__((unused)) char **argv)
{
	int i;

	i = 0;
	while (environ[i])
	{
		_puts(environ[i++]);
		_putchar('\n');
	}
}
