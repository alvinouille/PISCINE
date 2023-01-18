
SRC	= ft_itoa.c dict_error.c ft_atoi.c check_dictionnary.c ft_split.c main.c nb_cutter.c nb_cutter2.c print_words.c search_str_in_tab.c

OBJS    = ${SRC:.c=.o}

EXE	= rush-02

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

.PHONY: all clean fclean
