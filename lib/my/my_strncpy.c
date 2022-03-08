/*
** EPITECH PROJECT, 2021
** my
** File description:
** my
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;

    while (i < n) {
        dest[i] = src[i];
        i += 1;
    }
    if (n == i) {
        dest[i] = '\0';
    }
    return (dest);
}
