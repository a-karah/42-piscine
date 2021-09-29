INCL_DIR = includes/
SRC_DIR = ./srcs/
SRC_FILES = ft_putchar.c \
	   ft_swap.c \
	   ft_putstr.c \
	   ft_strlen.c \
	   ft_strcmp.c
OBJ_FILES = $(SRC_FILES:.c=.o)
SRCS = $(addprefix $(SRC_DIR), $(SRC_FILES))
OBJS = $(addprefix $(SRC_DIR), $(OBJ_FILES))
LIB_NAME = libft.a

CC = gcc
CFLAGS = -Wall -Werror -Wextra
ARCH = ar -rcs
RM = rm -f

all: $(LIB_NAME)

$(SRC_DIR)%.o: $(SRC_DIR).c
	$(CC) $(CFLAGS) -I $(INCL_DIR) -c $< -o $@

$(LIB_NAME): $(OBJS)
	$(ARCH) $@ $^

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(LIB_NAME)

re: fclean all

.PHONY: all clean fclean re
