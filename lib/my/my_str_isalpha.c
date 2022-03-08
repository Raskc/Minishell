/*
** EPITECH PROJECT, 2021
** char
** File description:
** char
*/

int my_str_isalpha(char const *str)
{
    if (str[0] == '\0') {
        return (1);
    }
    for (int i; str[i] != '\0'; i += 1) {
        if ((str[i] > 'z' || str[i] < 'a') && (str[i] < 'A' || str[i] > 'Z')) {
            return (1);
        }
    }
    return (0);
}
