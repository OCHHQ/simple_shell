#include "shell.h" // Include the shell header file

/**
 * main - Entry point of the shell program
 *
 * Description: This function serves as the entry point of the simple shell program.
 * It displays a prompt, reads user input, and executes commands until an exit condition is met.
 *
 * Return: EXIT_SUCCESS on successful execution, or an error code on failure.
 */
int main(void)
{
  char *input;
  int status;

  do {
    print_prompt(); // Display a shell prompt
    input = read_line(); // Read user input
    if (input == NULL)
      break;

    status = execute_command(input); // Execute the user's command

    free(input); // Free allocated memory for input
  } while (status != -1);

  return (EXIT_SUCCESS);
}
