NAME = ft_tail
CC = cc -Wall -Werror -Wextra

_SRC = main.c print.c init.c error.c util.c ft_atoi.c parsing.c
OBJ = $(_SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $^ -o $@

%.o: %.c
	$(CC) -c $< -o $@

.PHONY: clean fclean re

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all
