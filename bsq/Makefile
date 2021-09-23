SRCS 	= ./srcs/error.c ./srcs/file_man.c ./srcs/ft_atoi.c ./srcs/main.c ./srcs/2d.c ./srcs/find_square.c ./srcs/ft_strcpy.c ./srcs/error_h.c
OBJS	= ${SRCS:.c=.o}
INCS	= includes
NAME	= bsq
CC	= gcc
RM	= rm -f
CFLAGS	= -Wall -Wextra -Werror

.c.o :
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I${INCS}

${NAME} : ${OBJS}
	${CC} ${CFLAGS} ${OBJS} -o ${NAME}

all : ${NAME}

run :
	./${NAME}

clean :
	${RM} ${OBJS}

fclean : clean
	${RM} ${NAME}

norm :
	norminette */*.[ch]

find_sources :
	find srcs -type f -name "*.c" | xargs -I{} echo ./{} | tr '\n' ' '

re : fclean all

.PHONY: all clean fclean re .c.o test
