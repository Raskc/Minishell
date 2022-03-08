/*
** EPITECH PROJECT, 2021
** my_compute
** File description:
** rec
*/
#include<stdio.h>

int my_compute_power_rec(int nb, int p)
{
    if (p < 0) {
        return (0);
    }
    if (p == 0) {
        return (1);
    } else {
        return (my_compute_power_rec(nb, p - 1) * nb);
    }
}
