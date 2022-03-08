/*
** EPITECH PROJECT, 2021
** test
** File description:
** test
*/
#include "tcsh.h"
#include "my.h"

int check_buildin3(tcsh_t *tcsh)
{
    int size = get_size(tcsh->args);

    if (my_strcmp(tcsh->command, "unsetenv") == 0) {
        if (size > 1)
            rem_envs(tcsh, tcsh->args[1]);
        else
            my_printerr("unsetenv: Too few arguments.\n");
        return (1);
    }
    return (0);
}
