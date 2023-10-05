#include "shell.h"

/**
 * function_name - Short description, single line
 * @parameterx: Description of parameter x
 *
 * Description: Longer description of the function)?
 *
 * Return: Description of the returned value
 */

int main() {
  // Print "$ ".
  printf("$ ");

  // Wait for the user to enter a command.
  char *command = _getline();

  // If the return value is NULL, then we encountered an error or end-of-file.
  if (command == NULL) {
    // Handle the error or end-of-file condition.
    return 1;
  }

  // Otherwise, we successfully read a line of text.
  // Print the command on the next line.
  printf("%s\n", command);

  // Free the memory allocated by _getline().
  free(command);

  return 0;
}

