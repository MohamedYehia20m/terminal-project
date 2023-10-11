#include "shell.h"

/**
 * check_spaces_input - check if the input is spaces only
 * @buffer: pointer to the buffer
 *
 * Return: 1 if yes
 *	0 if no
 */
int check_spaces_input(char *buffer)
{
	int i; 
	//int bflen = _strlen(buffer), result;
	//char *spaces =  (char *)malloc(bflen + 1);

	/*printf("bflen : %d\n", bflen);
	spaces = (char *)malloc(bflen + 1);
	printf("spaces before : %d\n", _strlen(spaces));
	if (spaces == NULL)
		exit(1);*/
	for (i = 0; buffer[i] != '\0'; i++)
		if (buffer[i] != ' ')
			return (0); //not all spaces input
	/*printf("spaces after : %d\n", _strlen(spaces));
	printf("bflen : %d\n", bflen);
	printf("bflen : %d\n", _strlen(buffer));
	printf("start ");
	//printf("%s",buffer);
	_puts(buffer);
	printf("end\n");

	printf("start ");
        printf("%s",spaces);
	printf("end\n");
	result = _strcmp(buffer, spaces) == 0 ? 1 : 0 ;
	printf("res : %d\n", result);*/
	//free(spaces);
	return (1); //all spaces input
}
/*
void main(void)
{
	char* buffer1 = "   ";
	char* buffer2 = "a  ";
	printf("%d\n",check_spaces_input(buffer1));
	printf("%d\n",check_spaces_input(buffer2));
}*/
