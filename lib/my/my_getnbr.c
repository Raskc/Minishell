/*
** EPITECH PROJECT, 2021
** my_getnbr
** File description:
** getnbr
*/

int ope(char const *str, int nb)
{
    int count = 0;

    for (int i = 0; str[i] == '+' || str[i] == '-'; i++) {
        if (str[i] == '-') {
            count += 1;
        }
        i += 1;
    }
    if (count % 2) {
        return (nb * -1);
    }
    return (nb);
}

int check_err(char const *str)
{
    char c;

    for (int i = 0; str[i] != '\0'; i++) {
        c = str[i];
        if ((c > '9' || c < '0') && (c != '-' && c != '+')) {
            return (-1);
        }
    }
    return (0);
}

int my_getnbr(char const *str)
{
    int result = 0;

    if (check_err(str) == -1) {
        return (check_err(str));
    }
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] <= '9' && str[i] >= '0') {
            result = result * 10 + str[i] - '0';
        }
    }
    result = ope(str, result);
    return (result);
}
