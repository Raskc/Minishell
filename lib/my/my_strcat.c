/*
** EPITECH PROJECT, 2021
** test
** File description:
** test
*/
#include "my.h"
#include <stdlib.h>

char *my_strcat(char *dest, char const *src)
{
    int len = my_strlen(dest);
    int i = 0;

    while (src[i] != '\0') {
        dest[len] = src[i];
        i++;
        len++;
    }
    dest[len] = '\0';
    return (dest);
}
