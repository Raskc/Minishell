/*
** EPITECH PROJECT, 2021
** char
** File description:
** char
*/
#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}
