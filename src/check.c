/*
** EPITECH PROJECT, 2021
** test
** File description:
** test
*/
#include "tcsh.h"
#include "my.h"

int already_inenv(tcsh_t *tcsh, char *target)
{
    char **copy = copy_env(tcsh->env);

    for (int i = 0; copy[i] != NULL; i++) {
        if (my_strcmp(target, strtok(copy[i], "=")) == 0)
            return (1);
    }
    for (int i = 0; copy[i] != NULL; i++)
        free(copy[i]);
    free(copy);
    return (0);
}

int get_sizeenv(tcsh_t *tcsh)
{
    int size = 0;

    for (int i = 0; tcsh->env[i] != NULL; i++)
        size++;
    return (size);
}

void added_env(tcsh_t *tcsh, int state)
{
    char **new;
    int size = get_sizeenv(tcsh);

    new = malloc(sizeof(char*) * (size + 2));
    for (int i = 0; i < size; i++)
        new[i] = my_strdup(tcsh->env[i]);
    if (state == 1)
        new[size] = my_concat(my_concat(tcsh->args[1], "="), tcsh->args[2]);
    else
        new[size] = my_concat(tcsh->args[1], "=");
    new[size + 1] = NULL;
    tcsh->env = new;
}

void env_mod(tcsh_t *tcsh)
{
    int nbargs = get_size(tcsh->args);

    if (nbargs == 2) {
        added_env(tcsh, 2);
    } else if (nbargs == 3) {
        added_env(tcsh, 1);
    }
}
