#include "shell.h"

int main(void)
{
	char str[] = "This is a test string.";
	char **strings = split_string(str);

	for (unsigned long int i = 0; (strings[i] != NULL); i++)
	{
		_puts(strings[i]);
		_putchar('\n');
	}
	_putchar('\n');
	free(strings);
	return (0);
}
