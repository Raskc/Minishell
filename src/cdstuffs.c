/*
** EPITECH PROJECT, 2021
** test
** File description:
** test
*/
#include "tcsh.h"
#include "my.h"

void cd_homewpath(tcsh_t *tcsh)
{
    tcsh->args[1]++;
    tcsh->args[1] = my_concat(get_homedir(tcsh), tcsh->args[1]);
    tcsh->lastcd = get_currentpath(tcsh);
    if (chdir(tcsh->args[1]))
        sub_cd(tcsh->args[1]);
}

void cd_home(tcsh_t *tcsh)
{
    tcsh->lastcd = get_currentpath(tcsh);
    if (chdir(get_homedir(tcsh)))
        sub_cd(get_homedir(tcsh));
}

void cd_withtwoargs(tcsh_t *tcsh)
{
    if (tcsh->args[1][0] == '~') {
        if (my_strlen(tcsh->args[1]) == 1) {
            cd_home(tcsh);
        } else {
            cd_homewpath(tcsh);
        }
    } else {
        verif_cd(tcsh);
    }
}
