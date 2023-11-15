#include "testlib.h"

char test_func(unsigned int i, char c)
{
    return c + i;
}

void test_ft_strmapi(char const *s, char (*f)(unsigned int, char), char *expected)
{
    char *str = ft_strmapi(s, f);
    if (str)
    {
        printf(BLUE"\"%s\" mapped with test_func is \"%s\"\n"RESET, s, str);
        free(str);
    }
    else
    {
        printf(BLUE"Cannot map \"%s\" with test_func (NULL returned)\n"RESET, s);
    }
    printf(GREEN"\t|=> %s\n"RESET, expected);
}

void main_test_strmapi()
{
    printf(RED"\nRunning main_test_strmapi...\n"RESET);

    printf(ORANGE"Running test_ft_strmapi...\n"RESET);
    test_ft_strmapi("Hello", test_func, "'Hfnos'");
    test_ft_strmapi("", test_func, "''");
    test_ft_strmapi(NULL, test_func, "NULL");
    test_ft_strmapi("Hello", NULL, "NULL");
}