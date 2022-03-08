/*
** EPITECH PROJECT, 2021
** square
** File description:
** root
*/
#include<stdio.h>

int my_compute_square_root(int nb)
{
    if (nb < 0) {
        return (0);
    }
    for (int i = 1; i * i <= nb; i += 1) {
        if (i * i == nb) {
            return (i);
        }
    }
    return (0);
}
