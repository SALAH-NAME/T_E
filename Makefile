BIN			=	bin
LIBFT		= ../libft/libft.a

CFILES	=	isfunctions.c memfunctions.c strfunctions.c tofunctions.c \
			strlfunctions.c mallfunctions.c test_atoi.c
SFILES	=	${addprefix src/,$(CFILES)}

$(BIN): 
	cc -Wall -Wextra -Werror -I./includes/ -o bin  $(SFILES) t_e.c -L../libft -lft

all: $(BIN)


fsan:
	cc -Wall -Wextra -Werror -g -fsanitize=address -I ../includes/ -o bin $(SFILES) t_e.c -L../libft -lft
clean:
	rm -f $(BIN)
fclean: clean

re: fclean all


.PHONY: all re fclean clean
