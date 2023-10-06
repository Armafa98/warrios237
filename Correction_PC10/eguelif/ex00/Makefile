NAME = ft_display_file

CC = cc -Wall -Wextra -Werror -I.

SRC = main.c print.c error.c init.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME) : $(OBJ)
	$(CC) $^ -o ft_display_file

%.o: %.c
	$(CC) -c $< -o $@

.PHONY: clean fclean re

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
