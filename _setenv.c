#include "shell.h"

int _setenv( char* name,  char* value, int overwrite)
{
	// Determine the required size for the new environment variable string	    
	int nameLen = _strlen(name);
	int valueLen = _strlen(value);
	int envVarSize = nameLen + valueLen + 2; // +2 for '=' and '\0'
	int i;
	int j = 0;
	// Check if the name already exists in the environment
	if (getenv(name) != NULL && !overwrite)
		return 0;
	// Allocate memory for the new environment variable string
   	char* envVar = (char*)malloc(envVarSize * sizeof(char));
	// Copy the name and value into the new environment variable string
	for (i = 0; i < nameLen; i++)
		envVar[i] = name[i];
	envVar[i] = '=';
	i++;
	while (j < valueLen)
	{
		envVar[i] = value[j];
		i++;	
		j++;	
	}
	envVar[i] = '\0';
	// Update the environment with the modified environment variable string
 
   	if (putenv(envVar) != 0)
   		return -1;
	return (getenv(name) != NULL) ? 0 : -1;
}	
