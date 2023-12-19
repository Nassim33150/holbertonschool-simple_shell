#include "main.h"

char *get_location(char *command)
{
    char *path, *path_copy, *path_token, *file_path, *delimiters = ":";
    int command_length, directory_length;
    struct stat buffer;

    path = getenv("PATH");

    if (path)
    {
        path_copy = strdup(path);
        command_length = strlen(command);
        path_token = strtok(path_copy, delimiters);

        while (path_token != NULL)
        {
            directory_length = strlen(path_token);

            /*Chaine contenant le chemin complet*/
            file_path = malloc(command_length + directory_length);

            /*Copie du jeton obtenu dans la nouvelle variable file_path*/
            strcpy(file_path, path_token);

            /*Ajout de la barre oblique, de la commande, et du caractère de fin*/
            strcat(file_path, "/");
            strcat(file_path, command);
            strcat(file_path, "\0");

            /*Vérifier chacun des répertoires et renvoyer uniquement le chemin de la commande donnée*/
            if (stat(file_path, &buffer) == 0)
            {
                free(path_copy);
                return (file_path);
            }
            else
            {
                free(file_path);
                path_token = strtok(NULL, delimiters);
            }
        }

        free(path_copy);

        if (stat(command, &buffer) == 0)
        {
            return (command);
        }

        return (NULL);
    }

    return (NULL);
}
