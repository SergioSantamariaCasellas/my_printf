##
## EPITECH PROJECT, 2024
## hola
## File description:
## No file there, just an epitech header example.
## You can even have multiple lines if you want!
##

SRC	=	        lib/my/my_put_nbr.c	\
                lib/my/my_sort_int_array.c		\
				lib/my/my_strncat.c	\
                lib/my/my_putchar.c	\
                lib/my/my_str_isalpha.c	\
                lib/my/my_strcat.c		\
                lib/my/my_putstr.c		\
                lib/my/my_str_islower.c	\
                lib/my/my_strncpy.c	\
                lib/my/my_getnbr.c		\
                lib/my/my_strcpy.c		\
                lib/my/my_strstr.c		\
				lib/my/my_revstr.c		\
				lib/my/my_strlen.c		\
				lib/my/my_compute_power_rec.c	\
				src/printf.c	\
				src/s_i_per_c_f_conversions.c	\
				src/e_conversion.c		\
				src/display_functions.c		\
				src/display_functions2.c	\
				src/u_o_x_conversions.c		\
				src/other_conversions.c	\
				src/utility.c			\
				tests/test_my_printf.c		\

OBJ 	=	$(SRC:.c=.o)

NAME 	=	libmy.a

all:		$(NAME)

$(NAME):	$(OBJ)
			ar rc $(NAME) $(OBJ)
			gcc -o unit_tests ./src/printf.c	\
			./tests/test_my_printf.c --coverage	\
			-lcriterion -L. -lmy -I./include

clean:
			rm -f *.o
			rm -f ./lib/my/*.o
			rm -f ./src/*.o
			rm -f /*.gcno
			rm -f ./tests/*.o
			rm -f *.gcno
			rm -f *.gcda
			rm -f ./unit_tests
			rm -f a.out

fclean:		clean
			rm -f $(NAME)

re:		fclean
