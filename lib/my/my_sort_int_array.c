/*
** EPITECH PROJECT, 2021
** my_sort_in_array
** File description:
** array
*/

int get_min(int *array, int size, int i)
{
    int min = i;

    for (int e = i + 1; e < size + 1; e++) {
        if (array[e] < array[min]) {
            min = e;
        }
    }
    return (min);
}

void my_sort_int_array(int *array, int size)
{
    for (int i = 0; i < size; i++) {
        int min = get_min(array, size, i);
        int temp = array[min];

        array[min] = array[i];
        array[i] = temp;
    }
}
