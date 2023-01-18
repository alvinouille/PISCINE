
SRC	= do_op.c ft_atoi.c ft_operande.c ft_putchar.c ft_putnbr.c ft_putstr.c

OBJS    = ${SRC:.c=.o}

EXE	= do-op

OPTION = -I ./

CC	= gcc
RM	= rm -f

CFLAGS	= -Wall -Wextra -Werror

.c.o:
		${CC} -c ${CFLAGS} ${OPTION} $< -o ${<:.c=.o}

${EXE}:		${OBJS}
		${CC} -o ${EXE} ${OBJS}

all:		${EXE}

clean:
		${RM} ${OBJS}

fclean:		clean
		${RM} ${EXE}

re:		fclean all

.PHONY: all clean fclean re
