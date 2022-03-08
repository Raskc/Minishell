/*
** EPITECH PROJECT, 2021
** mem
** File description:
** mem
*/
#include <stdlib.h>

static int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }
    return (i);
}

static char *my_strcpy(char *dest, char const *src)
{
    int i = 0;

    while (src[i] != '\0') {
        dest[i] = src[i];
        i += 1;
    }
    dest[i] = '\0';
    return (dest);
}

char *my_strdup(char const *src)
{
    int len = my_strlen(src);
    char *mem = malloc(sizeof(char) * len + 1);

    mem = my_strcpy(mem, src);
    return (mem);
}
