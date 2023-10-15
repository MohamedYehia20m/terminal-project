#ifndef SHELL_H_
#define SHELL_H_

/*includes*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <stddef.h>

/*macros*/
#define WRITE_BUF_SIZE 1024
#define BUF_FLUSH -1

/*structures*/
struct Node {
	char* data;
	struct Node* next;
};

/**
 * struct builtinFunctionsStruct - holds the builtin string and related function
 * @cmd: command
 * @func: function
 */
typedef struct builtinFunctionsStruct
{
	char *cmd;
	void (*func)(char **argv);
} builtin_t;

/*previous functions*/
void _puts(char *s);
int _strcmp(char *s1, char *s2);
int _strlen(char *s);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *src);
int _atoi(char *s);

/*new functions*/
char* _getline(void);
char** split_string(char* str, const char *delim);
int _putchar(char c);
/*void check_command(char *command);*/
char *_getenv(char *name);
void printPathDirectories(void);
int check_spaces_input(char *buffer);
char *check_command(char *command);
char *delete_comments(char *command);
/*char *removeSpaces(char *str);*/
char *remove_spaces(char *bf);
char *handle_path(char **argv, char *bf);
void execute_command(char **argv);
void myExit(char **argv);
int check_builtin(char **argv);
void myEnv(char **argv);
void myCd(char **argv);

#endif
