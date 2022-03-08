/*
** EPITECH PROJECT, 2021
** str
** File description:
** str
*/
#include <stdlib.h>

char *my_strtochar(char c)
{
    char *str = malloc(sizeof(char) * 2);

    str[0] = c;
    str[1] = '\0';
    return (str);
}
