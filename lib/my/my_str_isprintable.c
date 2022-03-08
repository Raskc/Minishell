/*
** EPITECH PROJECT, 2021
** prin
** File description:
** print
*/

int my_str_isprintable(char const *str)
{
    if (str[0] == '\0') {
        return (1);
    }
    for (int i; str[i] != '\0'; i += 1) {
        if (str[i] <= 32) {
            return (1);
        }
    }
    return (0);
}
