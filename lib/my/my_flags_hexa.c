/*
** EPITECH PROJECT, 2021
** sour
** File description:
** sour
*/

#include "my.h"
#include <stdarg.h>

void my_flags_hexa(va_list arg)
{
    char *tab = "ABCDEF";
    my_putstr(my_putnbr_base(va_arg(arg, int), 16, tab));
}
