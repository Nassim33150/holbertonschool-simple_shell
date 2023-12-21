#include "main.h"


/**
 * exit_shell - command for exiting the shell.
 * @command: arguments passed by utilisateur.
 * Return: 0.
*/

int exit_shell(char *command)
{
	if (strcmp(command, "exit") == 0)
		return (1);
	return (0);
}


/**
 * printenv - prints the current environment
 * @environ: environment variable
 */

void printenv(char **environ)
{
int i = 0;

	for (; environ[i] ; i++)

		printf("%s\n", environ[i]);
}


/**
 * _printlineTyped - Basic function for interactive input in a shell.
 *
 * Description:
 * Displays a prompt, reads user input from stdin using getline,
 * and prints the entered line.
 * Exits the shell if getline returns -1 (EOF or an error).
 * Dynamically allocates memory for input and frees it at the end.
 *
 * Return:
 *  0 on success, -1 on shell exit or error.
 */
int _printlineTyped(void)
{
	char *prompt = "$ ";
	char *lineptr = NULL;
	char **tokens = NULL;
	size_t n = 0;
	ssize_t nchars_read;
	int status, i = 0;

	while (1)
	{
		if (isatty(fileno(stdin)))
			printf("%s", prompt);
		nchars_read = getline(&lineptr, &n, stdin);
		if (nchars_read == -1)
		{
			free(lineptr);
			exit(EXIT_FAILURE);
		}
		if (nchars_read > 0 && lineptr[nchars_read - 1] == '\n')
		{
			lineptr[nchars_read - 1] = '\0';
		}
		tokens = process_command(lineptr);
		free(lineptr);
		status = exit_shell(tokens[0]);
		if (status > 0)
		{
			for (i = 0; tokens[i]; i++)
				free(tokens[i]);
			free(tokens);
			tokens = NULL;
			exit(EXIT_SUCCESS);
		}
		exec_command(tokens);
		free(tokens);
	}
	return (0);
}

/**
 * exec_command - execute command.
 *
 * @tokens: arguments passed for utilisateurs.
*/
void exec_command(char **tokens)
{
	pid_t pid;
	char *generate_command = NULL, *command = NULL;

	if (tokens == NULL)
	{
		return;
	}
	else
	{
		command = tokens[0];
	}
	if ((strcmp(tokens[0], "env") == 0) && tokens[1] == NULL)
	{
		printenv(environ);
	}

	pid = fork();
	if (pid < 0)
	{
		perror("Forks fail");
	}
	else if (pid == 0)
	{
		generate_command = get_location(command);
		if (execve(generate_command, tokens, environ) == -1)
		{
			perror("./hsh");
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		waitpid(pid, NULL, 0);
	}
}
