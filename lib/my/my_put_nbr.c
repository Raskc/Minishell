/*
** EPITECH PROJECT, 2021
** test
** File description:
** test
*/

void my_putchar(char c);

static int len_int(int nb)
{
    int count = 0;

    while (nb > 0) {
        count += 1;
        nb = nb / 10;
    }
    return (count);
}

void neg_int(int *nb)
{
    if ((*nb) < 0) {
        my_putchar('-');
        (*nb) = -(*nb);
    }
}

void div_func(int *div, int nb)
{
    while ((nb / (*div)) >= 10) {
        (*div) = (*div) * 10;
    }
}

int my_put_nbr(int nb)
{
    char test;
    int len = 0;
    int div = 1;

    neg_int(&nb);
    len = len_int(nb);
    if (nb == 0) {
        my_putchar('0');
    }
    div_func(&div, nb);
    while (len != 0) {
        test = nb / div + 48;
        nb = nb % div;
        div = div / 10;
        len -= 1;
        my_putchar(test);
    }
    return (0);
}
