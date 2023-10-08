/**
 * _strcmp - a function that compares two strings.
 * @s1  : pointer to char.
 * @s2 : pointer to char.
 *
 * Description:  a function that compares two strings.
 *
 * Return:  It returns an integer less than, equal to, or greater than zero
 * if  s1  is found, respectively, to be less than, to match, or be greater
 * than s2.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (*(s1 + i) == *(s2 + i))
	{
		if (*(s1 + i) == '\0')
			return (0);
		i++;
	}
	return (*(s1 + i) - *(s2 + i));
}
