/*
** EPITECH PROJECT, 2021
** my_prime
** File description:
** prime
*/
#include<stdio.h>

int my_is_prime(int nb)
{
    int count;

    if (nb <= 1) {
        return (0);
    }
    for (int i = 2; i <= nb / 2; i++) {
        if (nb % i == 0) {
            count ++;
        }
    }
    if (count == 0) {
        return (1);
    } else {
        return (0);
    }
}
