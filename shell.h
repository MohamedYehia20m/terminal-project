#ifndef SHELL_H_
#define SHELL_H_

/*includes*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

/*macros*/
#define WRITE_BUF_SIZE 1024
#define BUF_FLUSH -1

/*previous functions*/
void _puts(char *s);

/*new functions*/
char* _getline(void);
char** split_string(char* str);
int _putchar(char c);

#endif
