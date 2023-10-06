NAME = ft_hexdump
CC = cc -Wall -Werror -Wextra

_SRC = main.c print.c init.c error.c print_row_hex.c util.c filesconcat_util.c print_util.c util_pr.c stdin.c
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
