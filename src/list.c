/*
** EPITECH PROJECT, 2021
** test
** File description:
** test
*/
#include "tcsh.h"
#include "my.h"

int get_size(char **list)
{
    int check = 0;

    if (list == NULL)
        return (0);
    for (int i = 0; list[i] != NULL; i++) {
        check++;
    }
    return (check);
}

void add_to_list(char ***list, char *str)
{
    int size = get_size((*list));
    char **new = malloc(sizeof(char*) * (size + 2));
    int i = 0;

    if (size == 0) {
        new = malloc(sizeof(char*) * 2);
        new[0] = my_strdup(str);
        new[1] = NULL;
        (*list) = new;
        return;
    }
    while (i < size) {
        new[i] = (*list)[i];
        i++;
    }
    new[i] = str;
    new[i + 1] = NULL;
    (*list) = new;
}
