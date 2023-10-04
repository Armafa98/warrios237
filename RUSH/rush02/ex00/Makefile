NAME = rush-02
LIBNAME = librush_02.a
LIBCALL = -L. -lrush_02
AR = ar rcs
IDIR = includes

SRCDIR = ./srcs
SRC = ft_atoi_rush.c ft_putstr.c init.c dict.c dict2.c display.c
MAIN = rush_02.c

CC = cc
CFLAGS = -Wall -Wextra -Werror -I$(IDIR)

OBJ = $(SRC:.c=.o)
OBJS = $(addprefix $(SRCDIR)/, $(OBJ))

all: $(NAME)

$(NAME): $(LIBNAME) $(MAIN) 
	$(CC) $(CFLAGS) $(LIBCALL) $(MAIN) -o $(NAME)

$(LIBNAME): $(OBJS)
	$(AR) $(LIBNAME) $(OBJS)

ft_atoi_rush.o: ft_atoi_rush.c
	$(CC) $(CFLAGS) -c ft_atoi_rush.c	

ft_putstr.o: ft_putstr.c
	$(CC) $(CFLAGS) -c ft_putstr.c	

init.o: init.c
	$(CC) $(CFLAGS) -c init.c	

dict.o: dict.c
	$(CC) $(CFLAGS) -c dict.c	

dict2.o: dict2.c
	$(CC) $(CFLAGS) -c dict2.c	

display.o: display.c
	$(CC) $(CFLAGS) -c display.c	

clean:
	rm -f $(OBJS)

lclean: clean
	rm -f $(LIBNAME)

fclean: lclean
	rm -f $(NAME)

re: fclean all
