# Source files
INCL = *.h
SRCS = *.c
OBJS = $(SRCS: .c=.o)
NAME = ft_display_file

# Compiler defines
CC = gcc
CFLAGS = -Wall -Werror -Wextra
CFDEBUG = -ansi -pedantic -Wall -g
RM = rm -rf

${NAME}: ${OBJS}
	${CC} ${CFLAGS} ${OBJS} ${INCL} -o ${NAME}

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all: ${NAME}

debug:
	${CC} ${CFDEBUG} ${SRC}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean
