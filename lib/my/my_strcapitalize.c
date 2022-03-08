/*
** EPITECH PROJECT, 2021
** capi
** File description:
** capit
*/

int check(char a)
{
    int condition1 = (a >= '0' && a <= '9');
    int condition2 = (a >= 'a' && a <= 'z');
    int condition3 = (a >= 'A' && a <= 'Z');

    if (condition1 || condition2 || condition3) {
        return (0);
    }
    return (1);
}

char *my_strcapitalize(char *str)
{
    int n = 0;
    char a = ' ';

    while (str[n] != '\0') {
        if ((str[n] <= 'z' && str[n] >= 'a') && check(a)) {
            str[n] -= 32;
        }
        a = str[n];
        n += 1;
    }
    return (str);
}
