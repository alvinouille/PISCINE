
SRCS	= ./srcs/

LIB	= libft.a

CC	= gcc
RM	= rm -f

HEADER = ./includes/

OPTION  = -c -I ${HEADER}

CFLAGS	= -Wall -Wextra -Werror

SRC	= ${SRCS}ft_putchar.c ${SRCS}ft_swap.c ${SRCS}ft_putstr.c ${SRCS}ft_strlen.c ${SRCS}ft_strcmp.c

OBJS    = ${SRC:.c=.o}

.c.o:
	${CC} ${OPTION} ${CFLAGS} $< -o ${<:.c=.o}

all:		${LIB}

${LIB}:		${OBJS}
		ar rc ${LIB} ${OBJS}

clean:
		${RM} ${OBJS}

fclean:		clean
		${RM} ${LIB}

re:		fclean all

.PHONY: all clean fclean re
