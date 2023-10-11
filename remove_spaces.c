#include "shell.h"

/**
 * remove_spaces - remove initial pading
 * @bf: pointer to the buffer
 *
 * Return: buffer without initial spaces
 */
char *remove_spaces(char *bf) // "    ls\n"
{
	char *tmp;
	int i = 0;

	while (bf[i] == ' ')
		i++;
	// len = _strlen(bf) - i;
	tmp = malloc(_strlen(bf) - i + 1);
	if (!tmp)
	{
		perror("Allocation Failed\n");
		return (NULL);
	}
	/*
	_strncpy(cpcmd, bf + i, len);
	cpcmd[len] = '\0';
	_strcpy(fb, cpcmd);
	free(cpcmd);
	*/
	tmp = _strdup(bf + i);
	free(bf);
	bf = tmp;
	return (bf);
}
