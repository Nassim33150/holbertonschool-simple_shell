#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int _printlineTyped()
{
    char *prompt = "$ ";
    char *lineptr = NULL;
    size_t n = 0;

    while (1)
    {
        printf("%s", prompt);
        getline(&lineptr, &n, stdin);
        printf("%s\n", lineptr);
    }

    free(lineptr);

    return (0);
}
int startShell()
{
    if (isatty(fileno(stdin)))
    {
        _printlineTyped();
    }
    else
    {
        printf("non-interactive mode\n");
    }
    return (0);
}