#include "shell.h"

/**
 * execute_from_file - execute from file
 * @filename: pointer to filename
 *
 *  Return: void
 */
void execute_from_file(char *filename)
{
	int fileDescriptor, i = 0;
	size_t readLetters = 0;
	char *buffer = NULL, **argv = NULL, c;

	if (filename == NULL)
		exit(0);
	fileDescriptor = open(filename, O_RDONLY);
	if (fileDescriptor == -1)
	{
		perror(filename);
		exit(127);
	}
	buffer = malloc(WRITE_BUF_SIZE);
	if (buffer == NULL)
		exit(0);
	while (1)
	{
		i = 0;
		do {
			readLetters = read(fileDescriptor, &c, 1);
			if (readLetters == 0)
				break;
			buffer[i++] = c;
		} while (c != '\n');
		if (readLetters == 0)
			break;
		buffer[i] = '\0';
		remove_spaces(buffer);
		buffer = delete_comments(buffer);
		if (_strlen(buffer) == 0 || _strlen(buffer) == 1)
			continue;
		argv = split_string(buffer, " \t\n");
		if (check_builtin(argv))
			continue;
		handle_path(argv, buffer);
		execute_command(argv);
	}
	free(buffer);
	close(fileDescriptor);
	if (fileDescriptor == -1)
		exit(0);
}
