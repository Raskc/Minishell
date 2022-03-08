/*
** EPITECH PROJECT, 2021
** lol
** File description:
** eez
*/
#include "my.h"
#include "stdlib.h"

char *my_concat(const char *s1, const char *s2)
{
    char *result = malloc(my_strlen(s1) + my_strlen(s2) + 1);

    my_strcpy(result, s1);
    my_strcat(result, s2);
    return (result);
}
