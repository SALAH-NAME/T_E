#include "testlib.h"

void test_ft_strtrim(char const *s1, char const *set, char *expected)
{
    char *str = ft_strtrim(s1, set);
    if (str)
    {
        printf(BLUE"\"%s\" trimmed with \"%s\" is \"%s\"\n"RESET, s1, set, str);
        free(str);
    }
    else
        printf(BLUE"\"%s\" cannot be trimmed with \"%s\" (NULL returned)\n"RESET, s1, set);
    printf(GREEN"\t|=> %s\n"RESET, expected);
}

void main_test_strtrim()
{
    printf(RED"\nRunning main_test_strtrim...\n"RESET);

    printf(ORANGE"Running test_ft_strtrim...\n"RESET);
    test_ft_strtrim("Hello World", "Hd", "'ello Worl'");
    test_ft_strtrim("", "Hd", "''");
    test_ft_strtrim("Hello World", "","'Hello World'");
    test_ft_strtrim("", "", "''");
    test_ft_strtrim(NULL, "Hd", "NULL");
    test_ft_strtrim("Hello World", NULL, "NULL");
    test_ft_strtrim(NULL, NULL, "NULL");

}