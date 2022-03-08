/*
** EPITECH PROJECT, 2021
** test
** File description:
** test
*/
#include "tcsh.h"
#include "my.h"

void command_ntf(char *command)
{
    my_printerr(command);
    my_printerr(": Command not found.\n");
}

void get_status(tcsh_t *tcsh, int status)
{
    if (WIFEXITED(status))
        tcsh->returnvalue = WEXITSTATUS(status);
    if (WTERMSIG(status) && WCOREDUMP(status))
        my_printerr("Segmentation fault (core dumped)\n");
    else if (WTERMSIG(status))
        my_printerr("Segmentation fault\n");
}

int exec_commands(tcsh_t *tcsh)
{
    pid_t pid;
    pid_t wpid;
    int status;

    pid = fork();
    if (pid == 0) {
        if (execve(tcsh->path, tcsh->args, tcsh->env) == -1)
            sub_cd(tcsh->path);
        exit(84);
    } else {
        wpid = waitpid(pid, &status, WUNTRACED);
        while (!WIFEXITED(status) && !WIFSIGNALED(status))
            wpid = waitpid(pid, &status, WUNTRACED);
        get_status(tcsh, status);
    }
    return (1);
}

int check_file(tcsh_t *tcsh)
{
    if (!access(tcsh->args[0], F_OK ) == 0)
        return (0);
    if (access(tcsh->args[0], X_OK) == 0) {
        tcsh->path = tcsh->args[0];
        exec_commands(tcsh);
        return (1);
    } else {
        sub_cd(tcsh->args[0]);
        return (1);
    }
    return (0);
}

int check_commands(tcsh_t *tcsh)
{
    int check = 0;

    if (tcsh->args == NULL)
        return (1);
    if (check_file(tcsh) == 1)
        return (1);
    check = check_builtin(tcsh);
    if (check == 1)
        return (1);
    else if (check == 2)
        return (0);
    if (loop_allbin(tcsh) == 0) {
        command_ntf(tcsh->command);
        return (1);
    }
    return (exec_commands(tcsh));
}
