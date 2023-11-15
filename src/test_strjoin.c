#include "testlib.h"

void test_ft_strjoin(char const *s1, char const *s2, char *expected)
{
    char *str = ft_strjoin(s1, s2);
    if (str)
    {
        printf(BLUE"\"%s\" and \"%s\" joined is \"%s\"\n"RESET, s1, s2, str);
        free(str);
    }
    else
        printf(BLUE"\"%s\" and \"%s\" cannot be joined (NULL returned)\n"RESET, s1, s2);
    printf(GREEN"\t|=> %s\n"RESET, expected);
}

void main_test_strjoin()
{
    printf(RED"\nRunning main_test_strjoin...\n"RESET);

    printf(ORANGE"Running test_ft_strjoin...\n"RESET);
    test_ft_strjoin("Hello", "World", "'HelloWorld'"); 
    test_ft_strjoin("", "World", "'World'");
    test_ft_strjoin("Hello", "", "'Hello'");
    test_ft_strjoin("", "", "''");
    test_ft_strjoin(NULL, "World", BR"NULL"RESET);
    test_ft_strjoin("Hello", NULL, BR"NULL"RESET);
    test_ft_strjoin(NULL, NULL, BR"NULL"RESET);

}