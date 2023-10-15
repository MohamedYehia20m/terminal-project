#include "shell.h"

char *_strtok(char *str,char *delim)
{
	static char *next_token;
	int i = 0;

	printf("next token: %s\n",next_token);
	if (str == NULL)
		str = next_token;
	if (str == NULL)
		return NULL;
	printf("_strtok str: %s\n", str);
	// Find the first delimiter character.
	while (*str != '\0') //&& !strchr(str, delim[0])
		for (i = 0; delim[i] != NULL ;i++)
			if (delim[i] != *str)
				str++;
			else
				
		str++;
	// If we reached the end of the string, there are no more tokens.
	if (*str == '\0')
	{
		next_token = NULL;
		return NULL;
	}
	// Replace the delimiter with a null terminator to mark the end of the token.
	*str = '\0';
	next_token = str + 1;
	 printf("_strtok before return str: %s\n", str);
	return str;
}

int main()
{
	char str[] = "This is a space-separated list.";
	char *token;

	token = _strtok(str, " ");
	printf("main token: %s",token);
        while (token != NULL)
	{
		printf("%s\n", token);
		token = _strtok(NULL, " \t\n");
	}
	return 0;
}
