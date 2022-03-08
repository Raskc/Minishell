/*
** EPITECH PROJECT, 2021
** test
** File description:
** test
*/
#include "tcsh.h"
#include "my.h"

char *get_currentpath(tcsh_t *tcsh)
{
    char buff[256];

    if (getcwd(buff, sizeof(buff)) == NULL) {
        my_printerr(strerror(errno));
        my_printerr(".\n");
    } else {
        tcsh->lastcd = my_strdup(buff);
    }
    return (tcsh->lastcd);
}

void display_env(tcsh_t *tcsh)
{
    for (int i = 0; tcsh->env[i] != NULL; i++)
        my_printf("%s\n", tcsh->env[i]);
}

void rem_partenv(tcsh_t *tcsh, char *target)
{
    char **new;
    int size = get_sizeenv(tcsh);
    int i = 0;
    int e = 0;

    new = malloc(sizeof(char*) * (size));
    while (i < size) {
        if (my_strcmp(target, strtok(my_strdup(tcsh->env[i]), "=")) != 0) {
            new[e] = my_strdup(tcsh->env[i]);
            e++;
        }
        i++;
    }
    new[size - 1] = NULL;
    tcsh->env = new;
}

void rem_envs(tcsh_t *tcsh, char *target)
{
    if (already_inenv(tcsh, target))
        rem_partenv(tcsh, target);
    if (my_strcmp(target, "*") == 0) {
        tcsh->env = malloc(sizeof(char*) * 1);
        tcsh->env[0] = NULL;
    }
}

void mod_env(tcsh_t *t, char *tgr)
{
    for (int i = 0; t->env[i] != NULL; i++)  {
        if (my_strcmp(tgr, strtok(my_strdup(t->env[i]), "=")) == 0) {
            t->env[i] = my_concat(my_concat(tgr, "="), my_strdup(t->args[2]));
        }
    }
}
