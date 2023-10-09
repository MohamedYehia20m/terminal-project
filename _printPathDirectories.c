#include "shell.h"

void printPathDirectories(void) {
    char* path = _getenv("PATH");
    char** directories = split_string(path, ":");
    int i = 0;

    while (directories[i]) 
    {
	_puts(directories[i++]);
        _putchar('\n');	
    }
}

void main(void)
{
	printPathDirectories();
}
