#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "libft.h"


char *sf(int x)
{
	return (x ? "SECCESS" : "FAILS");
}
void test_test() {
	printf("Running test_test...\n");
}

void test_isalpha() {
	printf("Running test_isalpha...\n");

	int a,b;
	char c;
	printf("\tft_isalpha(c) , isalpha()");
	c = 'a';
	a = ft_isalpha(c);
	b = isalpha(c);
	printf("\t%c =>\t%d  |  %d\t%s", c, a, b, sf(a == b));
	c = 'z';
	a = ft_isalpha(c);
	b = isalpha(c);
	printf("\t%c =>\t%d  |  %d\t%s", c, a, b, sf(a == b));
	c = 'A';
	a = ft_isalpha(c);
	b = isalpha(c);
	printf("\t%c =>\t%d  |  %d\t%s", c, a, b, sf(a == b));
	c = 'z';
	a = ft_isalpha(c);
	b = isalpha(c);
	printf("\t%c =>\t%d  |  %d\t%s", c, a, b, sf(a == b));
	c = '4';
	a = ft_isalpha(c);
	b = isalpha(c);
	printf("\t%c =>\t%d  |  %d\t%s", c, a, b, sf(a == b));
	c = ' ';
	a = ft_isalpha(c);
	b = isalpha(c);
	printf("\t%c =>\t%d  |  %d\t%s", c, a, b, sf(a == b));
	c = '+';
	a = ft_isalpha(c);
	b = isalpha(c);
	printf("\t%c =>\t%d  |  %d\t%s", c, a, b, sf(a == b));
	c = 65;
	a = ft_isalpha(c);
	b = isalpha(c);
	printf("\t%c =>\t%d  |  %d\t%s", c, a, b, sf(a == b));
	c = 340;
	a = ft_isalpha(c);
	b = isalpha(c);
	printf("\t%c =>\t%d  |  %d\t%s", c, a, b, sf(a == b));
}

void (*test_functions[50])() = {
	test_test,
	test_isalpha,
	NULL
};

char *function_names[50] = {
	"test",
	"isalpha",
	NULL
};

int main(int argc, char *argv[]) {
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
