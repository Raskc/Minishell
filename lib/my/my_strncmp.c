/*
** EPITECH PROJECT, 2021
** strncp
** File description:
** strncp
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
    int i = 0;

    while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i]) {
        i += 1;
        if (n - 1 == i) {
            break;
        }
    }
    return (s1[i] - s2[i]);
}
