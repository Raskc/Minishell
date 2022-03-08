/*
** EPITECH PROJECT, 2021
** test
** File description:
** test
*/
#include "tcsh.h"
#include "my.h"

char **copy_env(char **env)
{
    int size = 0;
    char **new;

    for (int i = 0; env[i] != NULL; i++)
        size++;
    new = malloc(sizeof(char*) * (size + 1));
    for (int i = 0; i < size; i++)
        new[i] = my_strdup(env[i]);
    new[size] = NULL;
    return (new);
}

char *get_homedir(tcsh_t *tcsh)
{
    for (int i = 0; tcsh->env[i] != NULL; i++) {
        if (my_strncmp("HOME", tcsh->env[i], 4) == 0)
            return (tcsh->env[i] + 5);
    }
    return (NULL);
}

int get_sep(char *path)
{
    int sep = 0;

    for (int i = 0; path[i] != '\0'; i++)
        if (path[i] == ':')
            sep++;
    return (sep);
}

char **get_bin(tcsh_t *tcsh)
{
    int sep = 0;
    char **bin_list;
    char *buff;
    char *path = get_path(tcsh);

    if (path == NULL)
        return (NULL);
    sep = get_sep(path);
    buff = strtok(path + 5, ":");
    bin_list = malloc(sizeof(char*) * (sep + 1));
    for (int i = 0; i < sep; i++) {
        bin_list[i] = my_strdup(buff);
        buff = strtok(NULL, ":");
    }
    bin_list[sep] = NULL;
    return (bin_list);
}

void add_envs(tcsh_t *tcsh, char *target)
{
    if (already_inenv(tcsh, target)) {
        mod_env(tcsh, target);
    } else {
        env_mod(tcsh);
    }
}
