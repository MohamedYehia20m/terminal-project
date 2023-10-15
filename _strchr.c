#include "shell.h"

/**
 * _strchr -  a function that locates a character in a string.
 * @s : string that to be examined
 * @c : character to be searched after
 *
 * Description: a function that locates a character in a string.
 *
 * Return:  return a pointer to the matched character or NULL
 * if the character is not found.   The  terminating null byte is considered
 * part of the string, so that if c is specified as '\0', these functions
 * return a pointer to the terminator.
 */

char *_strchr(char *s, char c)
{
	while (*(s++) != '\0')
	{
		if (*(s) == c)
			return (s);
	}
	return ('\0');
}
