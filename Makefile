CC = cc
SRC = printf.c utils.c
SRCS = $(addprefix src/, $(SRC)) main.c
NAME = printf.out
CFLAGS = -Wall -Werror -Wextra -g
LIBFT = libft

all: $(LIBFT)/libft.a $(NAME) completed

$(NAME):
	@$(CC) $(CFLAGS) $(SRCS) libft/libft.a -o $(NAME)

$(LIBFT)/libft.a:
	@$(MAKE) -C $(LIBFT)

completed:
	@echo "\n\nCompilation completed for printf 🎉\n\n➤ ./$(NAME)\n"

clean:
	@rm -f $(NAME)
	@cd libft && $(MAKE) clean

fclean: clean
	@rm -rf $(NAME)
	@cd libft && $(MAKE) fclean

re: fclean all

run: all
	./$(NAME)

.PHONY: all clean fclean re
