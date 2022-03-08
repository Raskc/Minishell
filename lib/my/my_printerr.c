/*
** EPITECH PROJECT, 2021
** lol
** File description:
** lol
*/
#include <unistd.h>
#include "my.h"

int my_printerr(char const *str)
{
    int len = my_strlen(str);

    write(2, str, len);
    return (0);
}
