#include <main.h>

/**
 * dup_lineptr - allocates memory for copying lineptr.
 * @lineptr: command passed by user.
*/

void dup_lineptr(char *lineptr)
{
	char *lineptr_copy = strdup(lineptr);

	if (lineptr_copy == NULL)
	{
		perror("memory allocation error");
		return;
	}
}
/**
 * process_command - divides the arguments and stocks into an array.
 * @lineptr: command passed by user.
*/

void process_command(char *lineptr)
{
	const char *delim = " \n";
	char *token, *token_copy, **argv;
	int num_tokens = 0, i;

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
		return;
	}
/* Stocker chaque token dans le tableau */
	token = strtok(lineptr_copy, delim);
		for (i = 0; token != NULL; i++)
		{
			argv[i] = malloc(sizeof(char) * (strlen(token) + 1));
			strcpy(argv[i], token);
			token = strtok(NULL, delim);
		}
	argv[i] = NULL;
 /* Libérer la mémoire allouée */
	free(lineptr_copy);
	for (i = 0; argv[i] != NULL; i++)
	{
		free(argv[i]);
	}
	free(argv);
}
