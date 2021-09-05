NAME = ft.out

SRC = *.c \
      ex*/*.c \
	 helper*/*.c 

FLAGS = -Wall -Wextra -Werror

COMPILER = gcc

all: $(NAME)

$(NAME):
	$(COMPILER) $(FLAGS) -o $(NAME) $(SRC) 

clean:
	rm -f *.o
	rm -f *~

fclean:
	rm -f $(NAME)

re: fclean all
