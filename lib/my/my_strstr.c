/*
** EPITECH PROJECT, 2021
** str
** File description:
** str
*/
#include <stddef.h>
#include <stdio.h>

static int my_strlen(char const *str)
{
    int i;

    while (str[i] != '\0') {
        i++;
    }
    return (i);
}

char *my_strstr(char *str, char const *to_find)
{
    int i = 0;
    int e = 0;
    int len = my_strlen(to_find);
    int save = 0;

    if (len == 0)
        return (str);
    while (str[i] != '\0') {
        if (str[i] == to_find[e]) {
            e += 1;
            save = i;
        }
        i += 1;
    }
    if (len == e) {
        return ((str - e) + save + 1);
    } else {
        return (NULL);
    }
}
