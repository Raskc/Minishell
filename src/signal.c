/*
** EPITECH PROJECT, 2021
** test
** File description:
** test
*/
#include "tcsh.h"
#include "my.h"

void signal_handler(int signal)
{
    if (signal == 2)
        my_printf("\n$> ");
}

void catch_signal(void)
{
    signal(SIGINT, signal_handler);
}
