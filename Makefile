NAME = push_swap

SRCS = binary_radix.c error_handle.c push_swap.c operations.c \
       operations2.c operations3.c operations4.c sort.c stack_prep.c

OBJS = $(SRCS:.c=.o)

CC = gcc

RM = rm -rf

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	@$(MAKE) -C ./libft
	@$(CC) $(CFLAGS) $(OBJS) ./libft/libft.a -o $(NAME)

clean:
	make clean -C libft
	@$(RM) *.o

fclean: clean
	make fclean -C libft
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
