#include "testlib.h"

void test_test() {
	printf(RED"Running test_test...\n"RESET);
}

void (*test_functions[50])() = {
	test_test,
	main_ft_isfunctions,
	main_ft_memfunctions,
	main_ft_strfunctions,
	main_ft_tofunctions,
	main_ft_strlfunctions,
	main_ft_mallfunctions,
	main_test_atoi,
	main_test_substr,
	main_test_strjoin,
	main_test_strtrim,
	main_test_split,
	main_test_itoa,
	main_test_strmapi,
	main_test_striteri,
	main_test_putchar_fd,
	main_test_putstr_fd,
	main_test_putendl_fd,
	main_test_putnbr_fd,
	main_test_lstnew,
	main_test_lstadd_front,
	main_test_lstsize,
	main_test_lstlast,
	main_test_lstadd_back,
	main_test_lstdelone,
	main_test_lstclear,
	main_test_lstiter,
	main_test_lstmap,
	NULL
};

char *function_names[50] = {
	"test",
	"isfunctions",
	"memfunctions",
	"strfunctions",
	"tofunctions",
	"strlfunctions",
	"mallfunctions",
	"atoi",
	"substr",
	"strjoin",
	"strtrim",
	"split",
	"itoa",
	"strmapi",
	"striteri",
	"putchar_fd",
	"putstr_fd",
	"putstrl_fd",
	"putnbr_fd",
	"lstnew",
	"lstadd_front",
	"lstsize",
	"lstlast",
	"lstadd_back",
	"lstdelone",
	"lstclear",
	"lstiter",
	"lstmap",
	NULL
};

void	help_print(){
	int i = 0;
	printf("\tHELP\n");
	while (function_names[i])
		printf("- %s\n", function_names[i++]);
}

int main(int argc, char *argv[]) {
	int j;
	int i = 0;
	int max = 50;


	if (argc == 1)
	{
		
		while (test_functions[i])
		{
			test_functions[i]();
			i++;
		}
	}
	else if (argc == 2 && !strcmp(argv[1],"help"))
	{
		help_print();
	}
	else if (argc == 2 && !strcmp(argv[1],"mandatory"))
	{
		while (test_functions[i] && i < 19)
		{
			test_functions[i]();
			i++;
		}
	}
	else if (argc == 2 && !strcmp(argv[1],"bonus"))
	{
		i = 19;
		while (test_functions[i])
		{
			test_functions[i]();
			i++;
		}
	}
	else
	{
		i = 1;
		while (i < argc)
		{
			j = 0;
			while (test_functions[j] && j < max)
			{
				if (strcmp(argv[i], function_names[j]) == 0)
				{
					test_functions[j]();
				}
				j++;
			}
			i++;
		}
	}
	return 0;
}