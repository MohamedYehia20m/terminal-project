#include "shell.h"

char *removeSpaces(char *str)
{
    int i, j;
    i = 0;
    j = 0;

    while (str[i]) {
        if (str[i] != ' ') {
            str[j] = str[i];
            j++;
        }
        i++;
    }

    str[j] = '\0';  // Null-terminate the resulting string
    return(str);
}
/*
int main() {
    char str[] = "Hello,  World!";  // Example string with spaces

    printf("Before removing spaces: %s\n", str);
    removeSpaces(str);
    printf("After removing spaces: %s\n", str);

    return 0;
}*/
