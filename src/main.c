/*
** EPITECH PROJECT, 2021
** test
** File description:
** test
*/
#include "tcsh.h"
#include "my.h"

int verif_term(tcsh_t *tcsh)
{
    if (isatty(0) == 1)
        my_printf("$> ");
    tcsh->line = my_getline();
    if (tcsh->line == NULL) {
        if (isatty(0) == 1)
            my_printf("exit\n");
        return (1);
    } else {
        tcsh->args = split_args(tcsh);
    }
    return (0);
}

int my_tcsh(char **env)
{
    tcsh_t tcsh;

    init_struct(&tcsh, env);
    catch_signal();
    while (tcsh.status) {
        if (verif_term(&tcsh) == 1)
            break;
        checking_args(&tcsh);
        free(tcsh.line);
        free(tcsh.args);
    }
    return (tcsh.returnvalue);
}

int main(int argc, char **argv, char **env)
{
    if (argc > 1)
        return (84);
    return (my_tcsh(env));
}
