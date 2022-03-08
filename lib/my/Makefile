##
## EPITECH PROJECT, 2021
## makefile
## File description:
## makefile
##

SRC     =       ./my_compute_power_rec.c\
                ./my_compute_square_root.c \
                ./my_is_prime.c \
                ./my_showmem.c \
                ./my_strcapitalize.c \
                ./my_putstr.c \
                ./my_str_isalpha.c \
                ./my_str_islower.c \
                ./my_strcmp.c \
                ./my_str_isupper.c \
                ./my_strlowcase.c \
                ./my_strncmp.c \
                ./my_strncpy.c \
                ./my_str_isnum.c \
                ./my_strlen.c \
                ./my_sort_int_array.c \
                ./my_getnbr.c \
                ./my_put_nbr.c \
                ./my_putchar.c \
                ./my_swap.c \
                ./my_revstr.c \
                ./my_showstr.c \
                ./my_find_prime_sup.c \
                ./my_isneg.c \
                ./my_str_isprintable.c \
                ./my_strcpy.c \
                ./my_strstr.c \
                ./my_strupcase.c \
                ./my_strcat.c \
                ./my_strncat.c \
                ./my_strdup.c \
                ./my_flags_o.c \
                ./my_flags_b.c \
                ./my_flags_hexa.c \
                ./my_flags_s.c \
                ./my_flags_u.c \
                ./my_flags_x2.c \
                ./put_base.c \
                ./my_printf.c \
                ./my_concat.c \
                ./my_strtochar.c \
                ./my_printerr.c \
                ./my_lenint.c \
                ./flags.c \

OBJ 	=	$(SRC:.c=.o)

NAME 	=	libmy.a

all:	$(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)
	find . -name "*.gcda" -delete \
        find . -name '*[#~#]' -delete \
        find . -name "*.gcno" -delete

fclean: clean
	rm -f $(NAME)

re:	fclean all
