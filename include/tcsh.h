/*
** EPITECH PROJECT, 2021
** tes
** File description:
** tt
*/
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/wait.h>
#include <errno.h>
#include <string.h>
#include <dirent.h>

#ifndef TCSH_H_
    #define TCSH_H_
typedef struct tcsh_s {
    char *command;
    char *line;
    int status;
    char **env;
    char **args;
    char *path;
    int checkfile;
    char *lastcd;
    int returnvalue;
}tcsh_t;
void catch_signal(void);
char *my_getline(void);
void add_to_list(char ***list, char *str);
void show_list(char **list);
char **split_args(tcsh_t *tcsh);
int check_commands(tcsh_t *tcsh);
void change_path(char **list);
void checking_args(tcsh_t *tcsh);
int check_builtin(tcsh_t *tcsh);
void init_struct(tcsh_t *tcsh_struct, char **env);
char *get_homedir(tcsh_t *tcsh);
void display_env(tcsh_t *tcsh);
int get_size(char **list);
char **get_bin(tcsh_t *tcsh);
void opentg(char *filepath);
int loop_allbin(tcsh_t *tcsh);
int already_inenv(tcsh_t *tcsh, char *target);
void add_envs(tcsh_t *tcsh, char *target);
int check_file(tcsh_t *tcsh);
int exec_commands(tcsh_t *tcsh);
void sub_cd(char *name);
void verif_cd(tcsh_t *tcsh);
char *get_currentpath(tcsh_t *tcsh);
char **copy_env(char **env);
int get_sizeenv(tcsh_t *tcsh);
void env_mod(tcsh_t *tcsh);
void mod_env(tcsh_t *t, char *tgr);
void rem_envs(tcsh_t *tcsh, char *target);
char *get_path(tcsh_t *tcsh);
int check_buildin3(tcsh_t *tcsh);
void cd_home(tcsh_t *tcsh);
void cd_withtwoargs(tcsh_t *tcsh);
void check_setenv(tcsh_t *tcsh, int size);
#endif /* TCSH_H_ */
