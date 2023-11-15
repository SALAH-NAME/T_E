#include "testlib.h"

void test_ft_toupper(int c, char *expected)
{
    int result = ft_toupper(c);
    if (isupper(result))
        printf(BLUE"'%c' is converted to '%c'"RESET, c, result);
    else
        printf(BLUE"'%c' is not converted"RESET, c);
    printf(GREEN"\t|=> %s\n"RESET, expected);
}

void test_ft_tolower(int c, char *expected)
{
    int result = ft_tolower(c);
    if (islower(result))
        printf(BLUE"'%c' is converted to '%c'"RESET, c, result);
    else
        printf(BLUE"'%c' is not converted"RESET, c);
    printf(GREEN"\t|=> %s\n"RESET, expected);
}

void main_ft_tofunctions()
{
    printf(RED"\nRunning main_ft_tofunctions...\n"RESET);

    printf(ORANGE"Running test_ft_toupper...\n"RESET);
    test_ft_toupper('a', "'a' is converted to 'A'");
    test_ft_toupper('A', "'A' is not converted");
    test_ft_toupper('1', "'1' is not converted");
    test_ft_toupper('!', "'!' is not converted");

    printf(ORANGE"Running test_ft_tolower...\n"RESET);
    test_ft_tolower('A', "'A' is converted to 'a'");
    test_ft_tolower('a', "'a' is not converted");
    test_ft_tolower('1', "'1' is not converted");
    test_ft_tolower('!', "'!' is not converted");
}