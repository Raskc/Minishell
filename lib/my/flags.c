/*
** EPITECH PROJECT, 2021
** sour
** File description:
** sour
*/
#include "my.h"
#include <stdarg.h>

void flags_3(int *i, char *format, va_list arg)
{
    char f = format[(*i) + 1];

    if (f == '%') {
        my_putchar('%');
        (*i)++;
        return;
    } else if (f == 'S') {
        my_flags_s(va_arg(arg, char *));
        (*i)++;
        return;
    }
    if (f == 'o') {
        my_flags_o(arg);
        (*i)++;
        return;
    } else if (f == 'u') {
        my_flags_u(va_arg(arg, unsigned int));
        (*i)++;
        return;
    }
}

void flags_2(int *i, char *format, va_list arg)
{
    char f = format[(*i) + 1];

    if (f == 'b') {
        my_flags_b(arg);
        (*i)++;
        return;
    } else if (f == 'X') {
        my_flags_hexa(arg);
        (*i)++;
        return;
    }
    if (f == 'x') {
        my_flags_x(arg);
        (*i)++;
        return;
    }
    flags_3(i, format, arg);
}

void flags(int *i, char *format, va_list arg)
{
    char f = format[(*i) + 1];

    if (f == 's') {
        my_putstr(va_arg(arg, char *));
        (*i)++;
        return;
    } else if (f == 'c') {
        my_putchar(va_arg(arg, int));
        (*i)++;
        return;
    }
    if (f == 'i' || f == 'd') {
        my_put_nbr(va_arg(arg, int));
        (*i)++;
        return;
    }
    flags_2(i, format, arg);
}

int c_is_fl(char *list, char flag)
{
    for (int i = 0; list[i] != '\0'; i++) {
        if (list[i] == flag) {
            return (1);
        }
    }
    return (0);
}
