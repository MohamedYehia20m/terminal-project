#include "shell.h"

/**
* _strcpy - copies the string pointed to by src,
*	including the terminating null byte (\0),
*	to the buffer pointed to by dest.
* @dest: pointer to the first address of the destination string.
* @src: pointer to the first address of the source string.
*
* Return: pointer to char
*/

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
