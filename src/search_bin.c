/*
** EPITECH PROJECT, 2021
** test
** File description:
** test
*/
#include "tcsh.h"
#include "my.h"

char *verif_bin(char *filepath, char *command)
{
    DIR *op;
    char *name = NULL;
    struct dirent *dir;

    op = opendir(filepath);
    if (op == NULL)
        return (NULL);
    while ((dir = readdir(op)) != NULL) {
        if (my_strcmp(dir->d_name, command) == 0)
            name = my_strdup(dir->d_name);
    }
    if (name != NULL) {
        filepath = my_concat(filepath, "/");
        filepath = my_concat(filepath, name);
        return (my_strdup(filepath));
    }
    return (NULL);
}

int loop_allbin(tcsh_t *tcsh)
{
    char **bin_list = get_bin(tcsh);
    int check = 0;

    if (bin_list == NULL)
        return (0);
    for (int i = 0; bin_list[i] != NULL; i++) {
        if (verif_bin(bin_list[i], tcsh->command) != NULL) {
            tcsh->path = verif_bin(bin_list[i], tcsh->command);
            check = 1;
            break;
        }
    }
    for (int i = 0; bin_list[i] != NULL; i++) {
        free(bin_list[i]);
    }
    free(bin_list);
    return (check);
}
