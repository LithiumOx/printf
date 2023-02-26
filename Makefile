CC = cc
SRC = printf.c utils.c
SRCS = $(addprefix src/, $(SRC)) main.c
NAME = printf.out
CFLAGS = -Wall -Werror -Wextra
LIBFT = ../libft

all: $(NAME) libft

$(NAME):
	$(CC) $(CFLAGS) $(SRCS) ../libft/libft.a -o $(NAME)

libft:
	@echo ======== LIBFT ========
	@$(MAKE) -C $(LIBFT)

clean:
	rm -rf $(NAME)

fclean: clean
	rm -rf $(NAME)

re: fclean all
