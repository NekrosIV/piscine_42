SRCS = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c

OBJS = ${SRCS:.c=.o}

HEADER = includes/

CC = cc

CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

all : ${NAME}

${NAME} : ${OBJS}
	ar rc $@ $^

.c.o:
	${CC} ${CFLAGS} -I ${HEADER} -c $< -o ${<:.c=.o}

clean :
	rm -f {OBJS}

fclean : clean
	rm -f ${NAME}

re : fclean all

.PHONY : all clean fclean re
