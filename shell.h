#ifndef SHELL_H_
#define SHELL_H_

/*includes*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

/*previous functions*/


/*new functions*/
char* _getline(void);
char** split_string(char* str);

#endif
