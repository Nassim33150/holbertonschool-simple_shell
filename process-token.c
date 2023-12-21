#include "main.h"

/**
 * process_command - divides the arguments and stocks into an array.
 * @lineptr: command passed by user.
 *
 * Return: an array with token.
*/

char **process_command(char *lineptr)
{
	const char *delim = " \n";
	char *token, **argv;
	int num_tokens = 0, i;
	char *lineptr_copy = strdup(lineptr);

	if (lineptr_copy == NULL)
		exit(98);
/* Compter le nombre de tokens dans la commande */
	token = strtok(lineptr_copy, delim);
	while (token != NULL)
	{
		num_tokens++;
		token = strtok(NULL, delim);
	}
/* Allouer de la mémoire pour le tableau de tokens */
	argv = malloc(sizeof(char *) * num_tokens);
	if (argv == NULL)
	{
		perror("memory allocation error");
		free(lineptr_copy);
		exit(98);
	}
/* Stocker chaque token dans le tableau */
	token = strtok(lineptr, delim);
	for (i = 0; token != NULL; i++)
	{
		argv[i] = malloc(sizeof(char) * (strlen(token + 1)));
		strcpy(argv[i], token);
		token = strtok(NULL, delim);
	}
	argv[i] = NULL;
 /* Libérer la mémoire allouée */
	free(lineptr_copy);
	return (argv);
}
