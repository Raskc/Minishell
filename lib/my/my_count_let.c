/*
** EPITECH PROJECT, 2021
** calc
** File description:
** calc
*/

char *my_strlowcase(char *str);

int my_count_let(char *let, char *str)
{
    int count = 0;

    my_strlowcase(let);
    my_strlowcase(str);
    for (int j = 0; str[j] != '\0'; j += 1) {
        if (str[j] == let[0]) {
            count += 1;
        }
    }
    return (count);
}
