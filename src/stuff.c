/*
** EPITECH PROJECT, 2021
** test
** File description:
** test
*/
#include "tcsh.h"
#include "my.h"

void check_setenv(tcsh_t *tcsh, int size)
{
    if (size > 3)
        my_printerr("setenv: Too many arguments\n");
    else if (size > 1 && size < 4) {
        add_envs(tcsh, tcsh->args[1]);
    } else {
        display_env(tcsh);
    }
}
