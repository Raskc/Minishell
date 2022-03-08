/*
** EPITECH PROJECT, 2021
** test
** File description:
** test
*/
#include "tcsh.h"
#include "my.h"

void sub_cd(char *name)
{
    my_printerr(name);
    my_printerr(": ");
    my_printerr(strerror(errno));
    my_printerr(".\n");
}

int my_cd(tcsh_t *tcsh)
{
    int sz = get_size(tcsh->args);

    if (sz > 2) {
        my_printerr("cd: Too many arguments.\n");
    } else if (sz == 1) {
        cd_home(tcsh);
    } else {
        cd_withtwoargs(tcsh);
    }
    return (1);
}

int my_pwd(tcsh_t *tcsh)
{
    int size = get_size(tcsh->args);
    char buff[256];

    if (size > 1)
        my_printerr("pwd: ignoring non-option arguments\n");
    if (getcwd(buff, sizeof(buff)) == NULL) {
        my_printerr(strerror(errno));
        my_printerr(".\n");
    } else {
        my_printf("%s\n", buff);
    }
    return (1);
}

int check_builtin2(tcsh_t *tcsh)
{
    int size = get_size(tcsh->args);

    if (my_strcmp(tcsh->command, "env") == 0) {
        display_env(tcsh);
        return (1);
    }
    if (my_strcmp(tcsh->command, "setenv") == 0) {
        check_setenv(tcsh, size);
        return (1);
    }
    return (check_buildin3(tcsh));
}

int check_builtin(tcsh_t *tcsh)
{
    int size = get_size(tcsh->args);

    if (my_strcmp(tcsh->command, "cd") == 0)
        return (my_cd(tcsh));
    if (my_strcmp(tcsh->command, "exit") == 0) {
        if (size > 1) {
            my_printerr("exit: Expression Syntax.\n");
            return (1);
        } else {
            tcsh->returnvalue = 0;
            my_printf("exit\n");
            return (2);
        }
    }
    if (my_strcmp(tcsh->command, "pwd") == 0)
        return (my_pwd(tcsh));
    return (check_builtin2(tcsh));
}
