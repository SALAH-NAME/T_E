#include "libft.h"
#include "libtest.h"

char *sf(int x)                                                                 
{                                                                               
	return (x ? "\033[32mSUCCESS\033[0m" : "\033[31mFAILS\033[0m");               
}


void test_isalpha() {
	printf("Running test_isalpha...\n");

	int a,b;
	char c;
	printf("\tft_isalpha(c) , isalpha()\n");
	c = 'a';
	a = ft_isalpha(c);
	b = isalpha(c);
	printf("\t%c =>\t%d  |  %d\t%s\n", c, a, b, sf(a != 0 && 0 != b));
	c = 'z';
	a = ft_isalpha(c);
	b = isalpha(c);
	printf("\t%c =>\t%d  |  %d\t%s\n", c, a, b, sf(a != 0 && 0 != b));
	c = 'A';
	a = ft_isalpha(c);
	b = isalpha(c);
	printf("\t%c =>\t%d  |  %d\t%s\n", c, a, b, sf(a != 0 && 0 != b));
	c = 'z';
	a = ft_isalpha(c);
	b = isalpha(c);
	printf("\t%c =>\t%d  |  %d\t%s\n", c, a, b, sf(a != 0 && 0 != b));
	c = '4';
	a = ft_isalpha(c);
	b = isalpha(c);
	printf("\t%c =>\t%d  |  %d\t%s\n", c, a, b, sf(a != 0 && 0 != b));
	c = ' ';
	a = ft_isalpha(c);
	b = isalpha(c);
	printf("\t%c =>\t%d  |  %d\t%s\n", c, a, b, sf(a != 0 && 0 != b));
	c = '+';
	a = ft_isalpha(c);
	b = isalpha(c);
	printf("\t%c =>\t%d  |  %d\t%s\n", c, a, b, sf(a != 0 && 0 != b));
	c = 65;
	a = ft_isalpha(c);
	b = isalpha(c);
	printf("\t%c =>\t%d  |  %d\t%s\n", c, a, b, sf(a != 0 && 0 != b));
	c = (char)340;
	a = ft_isalpha(c);
	b = isalpha(c);
	printf("\t%c =>\t%d  |  %d\t%s\n", c, a, b, sf(a != 0 && 0 != b));
}


void test_isdigit() {
	printf("Running test_isdigit...\n");

	int a,b;
	char c;
	printf("\tft_isdigit(c) , isdigit()\n");
	c = 'a';
	a = ft_isdigit(c);
	b = isdigit(c);
	printf("\t%c =>\t%d  |  %d\t%s\n", c, a, b, sf(a != 0 && 0 != b));
	c = 'z';
	a = ft_isdigit(c);
	b = isdigit(c);
	printf("\t%c =>\t%d  |  %d\t%s\n", c, a, b, sf(a != 0 && 0 != b));
	c = 'A';
	a = ft_isdigit(c);
	b = isdigit(c);
	printf("\t%c =>\t%d  |  %d\t%s\n", c, a, b, sf(a != 0 && 0 != b));
	c = 'z';
	a = ft_isdigit(c);
	b = isdigit(c);
	printf("\t%c =>\t%d  |  %d\t%s\n", c, a, b, sf(a != 0 && 0 != b));
	c = '4';
	a = ft_isdigit(c);
	b = isdigit(c);
	printf("\t%c =>\t%d  |  %d\t%s\n", c, a, b, sf(a != 0 && 0 != b));
	c = ' ';
	a = ft_isdigit(c);
	b = isdigit(c);
	printf("\t%c =>\t%d  |  %d\t%s\n", c, a, b, sf(a != 0 && 0 != b));
	c = '+';
	a = ft_isdigit(c);
	b = isdigit(c);
	printf("\t%c =>\t%d  |  %d\t%s\n", c, a, b, sf(a != 0 && 0 != b));
	c = 65;
	a = ft_isdigit(c);
	b = isdigit(c);
	printf("\t%c =>\t%d  |  %d\t%s\n", c, a, b, sf(a != 0 && 0 != b));
	c = (char)340;
	a = ft_isdigit(c);
	b = isdigit(c);
	printf("\t%c =>\t%d  |  %d\t%s\n", c, a, b, sf(a != 0 && 0 != b));
}

void test_isalnum() {
	printf("Running test_isalnum...\n");

	int a,b;
	char c;
	printf("\tft_isalnum(c) , isalnum()\n");
	c = 'a';
	a = ft_isalnum(c);
	b = isalnum(c);
	printf("\t%c =>\t%d  |  %d\t%s\n", c, a, b, sf(a != 0 && 0 != b));
	c = 'z';
	a = ft_isalnum(c);
	b = isalnum(c);
	printf("\t%c =>\t%d  |  %d\t%s\n", c, a, b, sf(a != 0 && 0 != b));
	c = 'A';
	a = ft_isalnum(c);
	b = isalnum(c);
	printf("\t%c =>\t%d  |  %d\t%s\n", c, a, b, sf(a != 0 && 0 != b));
	c = 'z';
	a = ft_isalnum(c);
	b = isalnum(c);
	printf("\t%c =>\t%d  |  %d\t%s\n", c, a, b, sf(a != 0 && 0 != b));
	c = '4';
	a = ft_isalnum(c);
	b = isalnum(c);
	printf("\t%c =>\t%d  |  %d\t%s\n", c, a, b, sf(a != 0 && 0 != b));
	c = ' ';
	a = ft_isalnum(c);
	b = isalnum(c);
	printf("\t%c =>\t%d  |  %d\t%s\n", c, a, b, sf(a != 0 && 0 != b));
	c = '+';
	a = ft_isalnum(c);
	b = isalnum(c);
	printf("\t%c =>\t%d  |  %d\t%s\n", c, a, b, sf(a != 0 && 0 != b));
	c = 65;
	a = ft_isalnum(c);
	b = isalnum(c);
	printf("\t%c =>\t%d  |  %d\t%s\n", c, a, b, sf(a != 0 && 0 != b));
	int d = 340;
	a = ft_isalnum(d);
	b = isalnum(d);
	printf("\t%c =>\t%d  |  %d\t%s\n", c, a, b, sf(a != 0 && 0 != b));
}


void test_isascii() {
	printf("Running test_isascii...\n");

	int a,b;
	char c;
	printf("\tft_isascii(c) , isascii()\n");
	c = 'a';
	a = ft_isascii(c);
	b = isascii(c);
	printf("\t%c =>\t%d  |  %d\t%s\n", c, a, b, sf(a != 0 && 0 != b));
	c = 'z';
	a = ft_isascii(c);
	b = isascii(c);
	printf("\t%c =>\t%d  |  %d\t%s\n", c, a, b, sf(a != 0 && 0 != b));
	c = 'A';
	a = ft_isascii(c);
	b = isascii(c);
	printf("\t%c =>\t%d  |  %d\t%s\n", c, a, b, sf(a != 0 && 0 != b));
	c = 'z';
	a = ft_isascii(c);
	b = isascii(c);
	printf("\t%c =>\t%d  |  %d\t%s\n", c, a, b, sf(a != 0 && 0 != b));
	c = '4';
	a = ft_isascii(c);
	b = isascii(c);
	printf("\t%c =>\t%d  |  %d\t%s\n", c, a, b, sf(a != 0 && 0 != b));
	c = ' ';
	a = ft_isascii(c);
	b = isascii(c);
	printf("\t%c =>\t%d  |  %d\t%s\n", c, a, b, sf(a != 0 && 0 != b));
	c = '+';
	a = ft_isascii(c);
	b = isascii(c);
	printf("\t%c =>\t%d  |  %d\t%s\n", c, a, b, sf(a != 0 && 0 != b));
	c = 65;
	a = ft_isascii(c);
	b = isascii(c);
	printf("\t%c =>\t%d  |  %d\t%s\n", c, a, b, sf(a != 0 && 0 != b));
	c = (char)340;
	a = ft_isascii(c);
	b = isascii(c);
	printf("\t%c =>\t%d  |  %d\t%s\n", c, a, b, sf(a != 0 && 0 != b));
}

void test_isprint() {
	printf("Running test_isprint...\n");

	int a,b;
	char c;
	printf("\tft_isprint(c) , isprint()\n");
	c = 'a';
	a = ft_isprint(c);
	b = isprint(c);
	printf("\t%c =>\t%d  |  %d\t%s\n", c, a, b, sf(a != 0 && 0 != b));
	c = 'z';
	a = ft_isprint(c);
	b = isprint(c);
	printf("\t%c =>\t%d  |  %d\t%s\n", c, a, b, sf(a != 0 && 0 != b));
	c = 'A';
	a = ft_isprint(c);
	b = isprint(c);
	printf("\t%c =>\t%d  |  %d\t%s\n", c, a, b, sf(a != 0 && 0 != b));
	c = 'z';
	a = ft_isprint(c);
	b = isprint(c);
	printf("\t%c =>\t%d  |  %d\t%s\n", c, a, b, sf(a != 0 && 0 != b));
	c = '4';
	a = ft_isprint(c);
	b = isprint(c);
	printf("\t%c =>\t%d  |  %d\t%s\n", c, a, b, sf(a != 0 && 0 != b));
	c = ' ';
	a = ft_isprint(c);
	b = isprint(c);
	printf("\t%c =>\t%d  |  %d\t%s\n", c, a, b, sf(a != 0 && 0 != b));
	c = '+';
	a = ft_isprint(c);
	b = isprint(c);
	printf("\t%c =>\t%d  |  %d\t%s\n", c, a, b, sf(a != 0 && 0 != b));
	c = 65;
	a = ft_isprint(c);
	b = isprint(c);
	printf("\t%c =>\t%d  |  %d\t%s\n", c, a, b, sf(a != 0 && 0 != b));
	c = (char)340;
	a = ft_isprint(c);
	b = isprint(c);
	printf("\t%c =>\t%d  |  %d\t%s\n", c, a, b, sf(a != 0 && 0 != b));
}
