/*
** EPITECH PROJECT, 2021
** sub
** File description:
** sub
*/

#include "my.h"
#include <stdio.h>
#include <stdlib.h>

static void ret_without_numneg(int *arr_calc, int i, char **arr_str)
{
    if (arr_calc[1] == 0) {
        arr_str[2][i] = arr_str[0][i];
    } else {
        arr_str[2][i] = arr_str[0][i] - 1;
        arr_calc[1] = 0;
    }
}

static void ret_with_numneg(int *arr_calc, int i, char **arr_str)
{
    if (arr_calc[1] == 1) {
        arr_calc[0] = (arr_str[0][i] - '0') - 1;
        arr_str[0][i] = arr_calc[0] + '0';
        arr_calc[1] = 0;
    }
    if (arr_str[0][i] - '0' < arr_str[1][i] - '0') {
        arr_calc[0] = (10 + arr_str[0][i] - '0') - (arr_str[1][i] - '0');
        arr_calc[1] = 1;
    } else {
        arr_calc[0] = (arr_str[0][i] - '0') - (arr_str[1][i] - '0');
    }
    arr_str[2][i] = arr_calc[0] + '0';
}

static void init_var(char **arr_str, int *arr_calc, char *str1, char *str2)
{
    arr_str[0] = str1;
    arr_str[1] = str2;
    arr_calc[0] = 0;
    arr_calc[1] = 0;
    arr_calc[2] = 0;
}

char *my_calculate_infin_neg(char *str1, char *str2)
{
    int *arr_calc = (int *)malloc(2 * sizeof(int));
    char **arr_str = (char **)malloc(2 * sizeof(char *));

    init_var(arr_str, arr_calc, str1, str2);
    if (my_strlen(arr_str[0]) < my_strlen(arr_str[1])) {
        arr_str[0] = str2;
        arr_str[1] = str1;
    }
    arr_str[2] = malloc(sizeof(char) * my_strlen(arr_str[0]) + 2);
    while (arr_calc[2] <= my_strlen(arr_str[0]) || arr_calc[1] != 0) {
        if (arr_calc[2] < my_strlen(arr_str[1])) {
            ret_with_numneg(arr_calc, arr_calc[2], arr_str);
        } else {
            ret_without_numneg(arr_calc, arr_calc[2], arr_str);
        }
        arr_calc[2] += 1;
    }
    my_revstr(arr_str[2]);
    return (arr_str[2]);
}
