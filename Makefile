SRCS = ft_printf_digit.c ft_printf_hex.c ft_printf_hexx.c ft_printf_uns.c ft_printf.c
LIBFT_OBJS = $> make -C "libft" -f makefile
OBJS = ${SRCS:.c=.o}
CC    = gcc
CFLAGS	= -Wextra -Wall -Werror
NAME	= libftprintf.a
.c.o:		&{CC} &{CFLAGS} -c -o $@ $<

${NAME} : ${OBJS} ${LIBFT_OBJS}
			ar -rc ${NAME} ${OBJS} ${LIBFT_OBJS}

all:  ${NAME}

clean:
	 rm -f ${OBJS}
	 rm -f ${LIBFT_OBJS}

fclean :	clean
	rm -f ${NAME}
	rm -f ${LIBFT_OBJS}
re : fclean all clean

.Phony: all bonus clean fclean re
