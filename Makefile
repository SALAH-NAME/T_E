BIN			=	bin
LIBFT		= ../libft/libft.a

CFILES	=	ft_isfunctions.c
SFILES	=	${addprefix src/,$(CFILES)}

$(BIN): 
	cc -Wall -Wextra -Werror -I ../libft/ -o bin  t_e.c -L../libft -lft

all: $(BIN)


fsan:
	cc -Wall -Wextra -Werror -g -fsanitize=address -I ../libft/ -o bin $(SFILES) t_e.c -L../libft -lft
clean:
	rm -f $(BIN)
fclean: clean

re: fclean all


.PHONY: all re fclean clean
