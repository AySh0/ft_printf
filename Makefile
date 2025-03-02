NAME = libftprintf.a
CFLAGS = -Wall -Werror -Wextra
CC = cc
SRCS = ft_printf.c ft_utils1.c ft_utils2.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME):$(OBJS)
	ar -rc $(NAME) $(OBJS)

clean:
	rm -rf $(OBJS)
	
fclean: clean
	rm -rf $(NAME)

re: fclean all
