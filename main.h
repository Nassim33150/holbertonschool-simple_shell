#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>


int _printlineTyped();
int startShell();
void dup_lineptr(char *lineptr);
void process_command(char *lineptr);


#endif
