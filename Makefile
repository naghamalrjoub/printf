src := ft_printf.c \
	   ft_putchar.c \
	   ft_puthexa.c \
	   ft_putnbr.c \
	   ft_putstr.c \
	   ft_putunsigned.c \
	   ft_putptr.c

obj := $(src:.c=.o)
NAME = libftprintf.a
CFLAGS = -Wall -Wextra -Werror

all: $(obj)
	ar -rcs $(NAME) $(obj)

%.o: %.c
	cc -c $(CFLAGS) $<

clean:
	rm -f $(obj)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re all
