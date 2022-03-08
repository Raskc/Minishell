/*
** EPITECH PROJECT, 2021
** sour
** File description:
** sour
*/
#include "my.h"
#include <stdarg.h>

void check0(char *str)
{
    int len = my_strlen(str);

    if (len == 1) {
        my_putstr("00");
    } else if (len == 2) {
        my_putchar('0');
    }
}

void my_flags_s(char *str)
{
    char *temp;

    for (int i = 0; str[i] != '\0';i++) {
        if (str[i] < 32 || str[i] >= 127) {
            my_putchar('\\');
            temp = my_putnbr_base(str[i], 8, "");
            check0(temp);
            my_putstr(temp);
        } else {
            my_putchar(str[i]);
        }
    }
}
