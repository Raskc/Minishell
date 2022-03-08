/*
** EPITECH PROJECT, 2021
** cond
** File description:
** cond
*/

#include "my.h"
#include <stdio.h>
#include <stdlib.h>

void con_with_num(int *arr_calc, int i, char **arr_str)
{
    if (i >= my_strlen(arr_str[0])) {
        arr_str[2][i] = '1';
        arr_calc[1] = 0;
    } else {
        arr_calc[0] = arr_str[0][i] - '0' + arr_calc[1];
        arr_str[2][i] = arr_calc[0] + '0';
        arr_calc[1] = 0;
    }
}
