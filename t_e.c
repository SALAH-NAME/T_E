#include "testlib.h"

// #include <signal.h>
// #include <setjmp.h>

// jmp_buf jump_buffer;

// void handle_sigsegv(int sig) {
//     printf("A segmentation fault (%d) occurred during the test.\n", sig);
//     longjmp(jump_buffer, 1);
// 	sig = 0;
// }

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
	"test_atoi",
	"test_substr",
	"test_strjoin",
	NULL
};

int main(int argc, char *argv[]) {
	// signal(SIGSEGV, handle_sigsegv);

	if (argc == 1) {
		for (int i = 0; test_functions[i]; i++)
		{
			test_functions[i]();
		}
	} else {
		for (int i = 1; i < argc; i++)
		{
			for (int j = 0; test_functions[j]; j++)
			{
				if (strcmp(argv[i], function_names[j]) == 0)
				{
					test_functions[j]();
				}
			}
		}
	}
	return 0;
}
