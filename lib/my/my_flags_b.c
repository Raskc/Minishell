/*
** EPITECH PROJECT, 2021
** sour
** File description:
** sour
*/
#include "my.h"
#include <stdarg.h>

void my_flags_b(va_list arg)
{
    my_putstr(my_putnbr_base(va_arg(arg, int), 2, ""));
}
