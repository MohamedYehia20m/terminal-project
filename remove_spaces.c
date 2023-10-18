#include "shell.h"

/**
 * remove_spaces - remove initial pading
 * @bf: pointer to the buffer
 *
 * Return: void
 */
void remove_spaces(char *bf)
{
	int i = 0, j, len = _strlen(bf), shift = 0;

	/* Remove leading spaces */
	while (bf[i] == ' ')
		i++;

	/* Remove trailing spaces */
	j = len - 1;
	while (j >= 0 && bf[j] == ' ')
	{
		bf[j] = '\0';
		j--;
	}

	/* Shift remaining characters to the left */
	shift = 0;
	while (i <= j)
	{
		bf[shift] = bf[i];
		i++;
		shift++;
	}
	bf[shift] = '\0';  /* Null-terminate the modified string */
}
