/*
** EPITECH PROJECT, 2021
** find
** File description:
** prime
*/

#include <stdio.h>

int my_is_prime2(int nb)
{
    int count;

    if (nb <= 1) {
        return (0);
    }
    for (int i = 2; i <= nb / 2; i++) {
        if (nb % i == 0) {
            count++;
        }
    }
    if (count == 0) {
        return (1);
    } else {
        return (0);
    }
}

int my_find_prime_sup(int nb)
{
    if (nb <= 1) {
        return (2);
    }
    while (nb > 0) {
        if (my_is_prime2(nb) == 1) {
            return (nb);
        }
        nb += 1;
    }
    return (nb);
}
