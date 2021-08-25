#include "shell.h"

/**
 * prompt_user - Check if no command was entered
 * @commands: String of commnands
 *
 * Return: 1 if no command was entered(just spaces and ENTER), 0 otherwise
*/
int prompt_user(char **commands)
{
	if (commands[0] == NULL || _strcmp(commands[0], "\n") == 0)
		return (1);

	return (0);
}
