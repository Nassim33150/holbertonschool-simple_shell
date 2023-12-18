#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

void exit_shell(char *command);
int _printlineTyped();
int startShell();
char **process_command(char *lineptr);
void exec_command(char **tokens);
char *get_location(char *command);
#endif
