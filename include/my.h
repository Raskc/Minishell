/*
** EPITECH PROJECT, 2021
** task
** File description:
** task
*/

#ifndef MY_H_
    #define MY_H_
    #include <stdarg.h>
void con_with_num(int *arr_calc, int i, char **arr_str);
char *my_calculate_infin_neg(char *str1, char *str2);
char *my_strdoo(char *dest, char const *src);
char *get_without_neg(char const *src);
char *my_calculate_infin_pos(char *str1, char *str2);
void init_var_infin(char **arr_str, int *arr_calc, char *str1, char *str2);
void ret_with_num(int *arr_calc, int i, char **arr_str);
void ret_without_num(int *arr_calc, int i, char **arr_str);
char *my_strdup(char const *src);
char *infin_add(char *str1, char *str2);
int my_show_word_array(char const *str);
char *my_strdup(char const *src);
char *concat_params(int argc, char **argv);
void my_putchar(char c);
char *my_strstr(char *str, char const *to_find);
int my_isneg(int nb);
int my_strcmp(char const *s1, char const *s2);
int my_put_nbr(int nb);
int my_strncmp(char const *s1, char const *s2, int n);
void my_swap(int *a, int *b);
char *my_strupcase(char *str);
int my_putstr(char const *str);
char *my_strlowcase(char *str);
int my_strlen(char const *str);
char *my_strcapitalize(char *str);
int my_getnbr(char const *str);
int my_str_isalpha(char const *str);
void my_sort_int_array(int *tab, int size);
int my_str_isnum(char const *str);
int my_compute_power_rec(int nb, int power);
int my_str_islower(char const *str);
int my_compute_square_root(int nb);
int my_str_isupper(char const *str);
int my_is_prime(int nb);
int my_str_isprintable(char const *str);
int my_find_prime_sup(int nb);
int my_showstr(char const *str);
char *my_strcpy(char *dest, char const *src);
int my_showmem(char const *str, int size);
char *my_strncpy(char *dest, char const *src, int n);
char *my_strcat(char *dest, char const *src);
char *my_revstr(char *str);
char *my_strncat(char *dest, char const *src, int nb);
int my_abs(int a);
int my_count_let(char *let, char *str);
int my_strlenalpha(char *str);
void my_putchar(char c);
int my_strlen(char const *str);
int my_putstr(char const *str);
int my_put_nbr(int nb);
void my_flags_s(char *str);
void my_flags_b(va_list arg);
void my_flags_hexa(va_list arg);
void my_flags_x(va_list arg);
void my_flags_o(va_list arg);
void my_flags_u(int unsigned b);
char *my_strdup(char const *src);
void flags(int *i, char *format, va_list arg);
int c_is_fl(char *list, char flag);
char *my_putnbr_base(int st, int base, char *tab);
char *my_revstr(char *str);
int my_getnbr(char const *str);
void my_printf(char *format, ...);
char *my_concat(const char *s1, const char *s2);
int my_lenint(int val);
char *my_strtochar(char c);
int my_printerr(char const *str);
#endif /* MY_H_ */
