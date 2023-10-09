#include "shell.h"

/**
 * _getline -  read a line of text from standard input.
 *
 * Description: function Allocate a buffer to store the command,then Use the
 * getline() function to read a line of text from standard input.
 *
 * Return: pointer to the buffer containing the command
 */

char *_getline(void)
{
	char *buffer = NULL;
	size_t len = 0;
	ssize_t bytes_read;

	bytes_read = getline(&buffer, &len, stdin);
	if (bytes_read == -1)
	{
		free(buffer);
		/*return (NULL);*/
		exit(127);
	}
	return (buffer);
}
