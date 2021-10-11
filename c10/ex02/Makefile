# Source files
INCLDIR := includes/
SRCDIR := ./srcs
OBJDIR = ./obj
SRCFILES = error.c \
	   helpers.c \
	   ft_tail.c \
	   main.c
OBJFILES = ${SRCFILES:.c=.o}
SRCS = $(addprefix $(SRCDIR)/, $(SRCFILES))
OBJS = $(addprefix $(OBJDIR)/, $(OBJFILES))
NAME := ft_tail

# Compiler defines
CC := gcc
CFLAGS = -Wall -Werror -Wextra
CFDEBUG = -ansi -pedantic -Wall -g
RM = rm -rf

all: obj ${NAME}

obj: $(SRCS)
	@mkdir -p $(OBJDIR)

${NAME}: ${OBJS}
	@echo "================"
	@echo "Compiling files"
	@echo "================"
	${CC} ${CFLAGS} ${OBJS} -o ${NAME}

${OBJDIR}/%.o: ${SRCDIR}/%.c
	${CC} ${CFLAGS} -c $< -o $@ -I ${INCLDIR}

debug: obj ${OBJS}
	${CC} ${CFDEBUG} ${OBJS} -o $(NAME)

test:
	bash -c "diff <(./ft_tail -c -6000 alice_in_wonderland.txt through_the_looking_glass.txt) <(tail -c 6000 alice_in_wonderland.txt through_the_looking_glass.txt)"
	bash -c "diff <(./ft_tail -c -1000 alice_in_wonderland.txt through_the_looking_glass.txt) <(tail -c 1000 alice_in_wonderland.txt through_the_looking_glass.txt)"
	bash -c "diff <(./ft_tail -c 1000 alice_in_wonderland.txt through_the_looking_glass.txt) <(tail -c +1000 alice_in_wonderland.txt through_the_looking_glass.txt)"
	bash -c "diff <(./ft_tail -c 6000 alice_in_wonderland.txt through_the_looking_glass.txt) <(tail -c +6000 alice_in_wonderland.txt through_the_looking_glass.txt)"

clean:
	@echo "================"
	@echo "Cleaning objects"
	@echo "================"
	${RM} ${OBJDIR}

fclean: clean
	@echo "================"
	@echo "Cleaning executable"
	@echo "================"
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
