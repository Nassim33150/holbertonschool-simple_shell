#include "main.h"
#include <stdio.h>

int main(int ac, char **argv)
{

    (void)ac;
    (void)argv;

    _printlineTyped();

    exec_command("/bin/ls");

    /**
     * printf("%s", my_prompt);

    printf("%s", typed);
    */

    return (0);
}