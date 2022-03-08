/*
** EPITECH PROJECT, 2021
** get_with
** File description:
** get_with
*/

#include "my.h"
#include <stdio.h>
#include <stdlib.h>

char *my_strdoo(char *dest, char const *src)
{
    int i = 0;
    int e = 0;

    while (src[i] != '\0') {
        if (src[i] == '-') {
            i += 1;
            continue;
        }
        dest[e] = src[i];
        i += 1;
        e += 1;
    }
    dest[i] = '\0';
    return (dest);
}

char *get_without_neg(char const *src)
{
    int len = my_strlen(src);
    char *mem = malloc(sizeof(char) * len + 1);

    mem = my_strdoo(mem, src);
    return (mem);
}
