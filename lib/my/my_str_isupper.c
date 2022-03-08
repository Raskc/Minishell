/*
** EPITECH PROJECT, 2021
** upper
** File description:
** upper
*/

int my_str_isupper(char const *str)
{
    if (str[0] == '\0') {
        return (1);
    }
    for (int i; str[i] != '\0'; i += 1) {
        if (str[i] > 'Z' || str[i] < 'A') {
            return (1);
        }
    }
    return (0);
}
