/*
** EPITECH PROJECT, 2021
** ze
** File description:
** ze
*/

int my_lenint(int val)
{
    int count = 0;

    while (val != 0) {
        val = val / 10;
        count++;
    }
    return (count);
}
