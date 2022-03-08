/*
** EPITECH PROJECT, 2021
** test
** File description:
** test
*/
#include "tcsh.h"
#include "my.h"

char *get_path(tcsh_t *tcsh)
{
    char *path = NULL;

    for (int i = 0; tcsh->env[i] != NULL; i++) {
        if (my_strncmp("PATH", tcsh->env[i], 4) == 0) {
            path = my_strdup(tcsh->env[i]);
            break;
        }
    }
    return (path);
}
