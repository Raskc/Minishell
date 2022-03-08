/*
** EPITECH PROJECT, 2021
** lower
** File description:
** lower
*/

char *my_strlowcase(char *str)
{
    for (int i = 0; str[i] != '\0'; i += 1) {
        if (str[i] <= 'Z' && str[i] >= 'A') {
            str[i] = str[i] + 32;
        }
    }
    return (str);
}
