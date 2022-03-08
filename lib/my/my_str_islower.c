/*
** EPITECH PROJECT, 2021
** mlower
** File description:
** lower
*/

int my_str_islower(char const *str)
{
    if (str[0] == '\0') {
        return (1);
    }
    for (int i; str[i] != '\0'; i += 1) {
        if (str[i] > 'z' || str[i] < 'a') {
            return (1);
        }
    }
    return (0);
}
