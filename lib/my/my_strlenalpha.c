/*
** EPITECH PROJECT, 2021
** strlen
** File description:
** strlen
*/

int my_strlenalpha(char *str)
{
    int countlet = 0;

    for (int i = 0; str[i] != '\0'; i += 1) {
            if ((str[i] >= 'A' && str[i] <= 'Z')
            || (str[i] >= 'a' && str[i] <= 'z')) {
            countlet += 1;
        }
    }
    return (countlet);
}
