/*
** EPITECH PROJECT, 2021
** infin
** File description:
** infin
*/

#include "my.h"
#include <stdio.h>
#include <stdlib.h>

void ret_without_num(int *arr_calc, int i, char **arr_str)
{
    if (arr_calc[1] == 0) {
        arr_str[2][i] = arr_str[0][i];
    } else if (arr_str[0][i] - '0' + arr_calc[1] >= 10) {
        arr_calc[0] = (arr_str[0][i] - '0' + arr_calc[1]) % 10;
        arr_str[2][i] = arr_calc[0] + '0';
        arr_calc[1] = 1;
    } else {
        con_with_num(arr_calc, i, arr_str);
    }
}

void ret_with_num(int *arr_calc, int i, char **arr_str)
{
    arr_calc[0] = (arr_str[0][i] - '0') + (arr_str[1][i] - '0');
    if (arr_calc[0] >= 10) {
        arr_calc[0] = arr_calc[0] % 10;
        arr_str[2][i] = arr_calc[0] + arr_calc[1] + '0';
        arr_calc[1] = 0;
    } else if ((arr_calc[0] + arr_calc[1]) >= 10) {
        arr_calc[0] = (arr_calc[0] + arr_calc[1]) % 10;
        arr_str[2][i] = arr_calc[0] + '0';
    } else {
        arr_str[2][i] = arr_calc[0] + arr_calc[1] + '0';
        arr_calc[1] = 0;
    }
    arr_calc[0] = (arr_str[0][i] - '0') + (arr_str[1][i] - '0');
    if (arr_calc[0] >= 10) {
        arr_calc[1] = 1;
    }
}

void init_var_infin(char **arr_str, int *arr_calc, char *str1, char *str2)
{
    arr_str[0] = str1;
    arr_str[1] = str2;
    arr_calc[0] = 0;
    arr_calc[1] = 0;
    arr_calc[2] = 0;
}

char *my_calculate_infin_pos(char *str1, char *str2)
{
    int *arr_calc = (int *)malloc(2 * sizeof(int));
    char **arr_str = (char **)malloc(2 * sizeof(char *));

    init_var_infin(arr_str, arr_calc, str1, str2);
    if (my_strlen(arr_str[0]) < my_strlen(arr_str[1])) {
        arr_str[0] = str2;
        arr_str[1] = str1;
    }
    arr_str[2] = malloc(sizeof(char) * my_strlen(arr_str[0]) + 2);
    while (arr_calc[2] <= my_strlen(arr_str[0]) || arr_calc[1] != 0) {
        if (arr_calc[2] < my_strlen(arr_str[1])) {
            ret_with_num(arr_calc, arr_calc[2], arr_str);
        } else {
            ret_without_num(arr_calc, arr_calc[2], arr_str);
        }
        arr_calc[2] += 1;
    }
    my_revstr(arr_str[2]);
    return (arr_str[2]);
}
