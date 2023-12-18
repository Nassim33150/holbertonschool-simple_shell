#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>


int _printlineTyped(void);
int startShell(void);
char **process_command(char *lineptr);
void exec_command(char **tokens);


#endif
