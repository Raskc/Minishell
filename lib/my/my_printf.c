/*
** EPITECH PROJECT, 2021
** sour
** File description:
** sour
*/

#include "my.h"
#include <stdarg.h>
#include <stdio.h>

void my_printf(char *format, ...)
{
    va_list arg;
    char *fl_list = "sidcSbXxo%u";

    va_start(arg, format);
    for (int i = 0; format[i] != '\0'; i++) {
        if (format[i] == '%' && c_is_fl(fl_list, format[i + 1]) == 1) {
            flags(&i, format, arg);
        } else {
            my_putchar(format[i]);
        }
    }
    va_end(arg);
}
