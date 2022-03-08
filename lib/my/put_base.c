/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** d7t4
*/
#include <stdlib.h>
#include <stdio.h>
#include "my.h"

char *my_putnbr_base(int st, int base, char *tab)
{
    int i = 0;
    int temp = 0;
    char *arr = (char *)malloc(sizeof(char) * (base * 10));

    while (st != 0) {
        temp = st % base;
        if (temp > 9) {
            arr[i] = tab[temp - 10];
        } else {
            arr[i] = temp + '0';
        }
        st = st / base;
        i += 1;
    }
    arr[i] = '\0';
    my_revstr(arr);
    return (arr);
}
