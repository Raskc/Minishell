/*
** EPITECH PROJECT, 2021
** test
** File description:
** test
*/
#include "tcsh.h"
#include "my.h"

char *my_getline(void)
{
    char *line = NULL;
    size_t read;
    size_t check = -1;
    size_t len = 0;

    read = getline(&line, &len, stdin);
    if (read == check)
        return (NULL);
    line[read - 1] = '\0';
    return (line);
}

char **split_args(tcsh_t *tcsh)
{
    char **new_list = NULL;
    char *dup = my_strdup("");
    int state = 0;

    if (my_strlen(tcsh->line) == 0)
        return NULL;
    for (int i = 0; tcsh->line[i] != '\0'; i++) {
        if (tcsh->line[i] != ' ') {
            dup = my_concat(dup, my_strtochar(tcsh->line[i]));
            state = 1;
        }
        if (tcsh->line[i] == ' ' && state == 1) {
            add_to_list(&new_list, dup);
            dup = my_strdup("");
            state = 0;
        }
    }
    if (state == 1)
        add_to_list(&new_list, dup);
    return (new_list);
}

void checking_args(tcsh_t *tcsh)
{
    if (my_strlen(tcsh->line) != 0) {
        tcsh->command = tcsh->args[0];
        tcsh->status = check_commands(tcsh);
        return;
    }
    tcsh->status = 1;
}

void init_struct(tcsh_t *tcsh_struct, char **env)
{
    tcsh_struct->returnvalue = 0;
    tcsh_struct->line = NULL;
    tcsh_struct->status = 1;
    tcsh_struct->env = copy_env(env);
    tcsh_struct->checkfile = 0;
    tcsh_struct->lastcd = my_strdup("");
}

void verif_cd(tcsh_t *tcsh)
{
    char *save = my_strdup(tcsh->lastcd);

    if (my_strcmp(tcsh->args[1], "-") == 0) {
        tcsh->lastcd = get_currentpath(tcsh);
        if (chdir(save))
            sub_cd(save);
    } else {
        tcsh->lastcd = get_currentpath(tcsh);
        if (chdir(tcsh->args[1]))
            sub_cd(tcsh->args[1]);
    }
}
