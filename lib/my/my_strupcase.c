/*
** EPITECH PROJECT, 2021
** up
** File description:
** up
*/

char *my_strupcase(char *str)
{
    for (int i; str[i] != '\0'; i += 1) {
        if (str[i] <= 'z' && str[i] >= 'a') {
            str[i] = str[i] - 32;
        }
    }
    return (str);
}
