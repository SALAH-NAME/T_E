BIN			=	bin
LIBFT		= ../libft/libft.a

CFILES	=	isfunctions.c memfunctions.c strfunctions.c tofunctions.c \
			strlfunctions.c mallfunctions.c test_atoi.c \
			test_substr.c test_strjoin.c test_strtrim.c test_split.c \
			test_itoa.c test_strmapi.c test_striteri.c test_putchar_fd.c \
			test_putstr_fd.c test_putendl_fd.c test_putnbr_fd.c \
			test_lstnew.c test_lstadd_front.c test_lstsize.c test_lstlast.c \
			test_lstadd_back.c test_lstdelone.c test_lstclear.c test_helper.c \
			test_lstiter.c test_lstmap.c
SFILES	=	${addprefix src/,$(CFILES)}

$(BIN): 
	cc -Wall -Wextra -Werror -I./includes/ -o bin  $(SFILES) t_e.c -L../libft -lft

all: $(BIN)


fsan:
	cc -Wall -Wextra -Werror -g -fsanitize=address -I ../includes/ -o bin $(SFILES) t_e.c -L../libft -lft
clean:
	rm -f $(BIN)
fclean: clean
	rm -f file_char  file_endl  file_nbr  file_str

re: fclean all


.PHONY: all re fclean clean
