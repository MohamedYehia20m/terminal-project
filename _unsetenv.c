#include "shell.h"

int _unsetenv(const char* name) {
	// Check if the name exists in the environment
	if (getenv(name) == NULL)
	{
		return 0;
 	}
	// Calculate the required size for the new environment string
	int newSize = 0;
	char** envp = environ;

	while (*envp != NULL) {

	if (strncmp(*envp, name, strlen(name)) != 0 || (*envp)[strlen(name)] != '=') 
	{    
		newSize++;
	}
	envp++;
	}

	// Allocate memory for the new environment string
	char** newEnv = (char**)malloc((newSize + 1) * sizeof(char*));
	// Copy the existing environment variables to the new environment string
	envp = environ;
	int i = 0;
	while (*envp != NULL)
	{                             
		if (strncmp(*envp, name, strlen(name)) != 0 || (*envp)[strlen(name)] != '=') 
		 {
			 newEnv[i] = *envp;
			 i++;
		 }
		 envp++;
	}                                                                         
	newEnv[i] = NULL;
	// Update the environment with the modified environment string
   	environ = newEnv;        
	return (getenv(name) == NULL) ? 0 : -1;
}
/*
void main(void)
{
	_unsetenv();
}
*/
