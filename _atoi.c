#include "shell.h"

#define POSITIVE 1
#define NEGATIVE -1

/**
* _atoi - convert a string to an integer.
* @s: pointer to the first address of the string.
*
* Return: int
*/

int _atoi(char *s)
{
	unsigned int n = 0;
	signed int sign = POSITIVE;

	while (*s != '\0')
	{
		if (*s == '-')
			sign *= NEGATIVE;
		else if (*s >= '0' && *s <= '9')
			n = (*s - 48) + (n * 10);
		else if (n > 0)
			break;
		s++;
	}
	return (n * sign);
}
