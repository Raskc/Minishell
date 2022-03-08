/*
** EPITECH PROJECT, 2021
** num
** File description:
** num
*/

int my_str_isnum(char const *str)
{
    if (str[0] == '\0') {
        return (1);
    }
    for (int i; str[i] != '\0'; i += 1) {
        if (str[i] >= '9' || str[i] <= '0') {
            return (1);
        }
    }
    return (0);
}
