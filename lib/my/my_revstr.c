/*
** EPITECH PROJECT, 2021
** rev
** File description:
** rev
*/
static int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }
    return (i);
}

char *my_revstr(char *str)
{
    int st = 0;
    int end = my_strlen(str) - 1;
    char temp;

    if (end + 1 == 1) {
        return (str);
    }
    while (st < end) {
        temp = str[st];
        str[st] = str[end];
        str[end] = temp;
        end--;
        st++;
    }
    return (str);
}
