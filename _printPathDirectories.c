#include "shell.h"

void printPathDirectories(void) {
    char* path = _getenv("PATH");
    char* token = strtok(path, ":");
    
    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, ":");
    }
}

void main(void)
{
	printPathDirectories();
}
