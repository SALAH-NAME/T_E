#include "testlib.h"

void test_ft_substr(char const *s, unsigned int start, size_t len, char *expected)
{
    char *substr = ft_substr(s, start, len);
    if (substr)
    {
        printf(BLUE"\"%s\" starting at %u with length %zu is \"%s\"\n"RESET, s, start, len, substr);
        free(substr);
    }
    else
        printf(BLUE"\"%s\" starting at %u with length %zu cannot be created (NULL returned)\n"RESET, s, start, len);
    printf(GREEN"\t|=> %s\n"RESET, expected);
}

void main_test_substr()
{
    printf(RED"\nRunning main_test_substr...\n"RESET);

    printf(ORANGE"Running test_ft_substr...\n"RESET);
	test_ft_substr("Hello,_world!", 0, 5, "Hello");
    test_ft_substr("Hello,_world!", 7, 5, "world");
    test_ft_substr("Hello,_world!", 12, 5, "!");
    test_ft_substr("Hello,_world!", 13, 5, "'' out of range");
    test_ft_substr("Hello,_world!", 23, 5, "'' out of range");
    test_ft_substr("Hello,_world!", 0, 50, "Hello,_world!");
    test_ft_substr("", 0, 5, "''");
    // test_ft_substr(NULL, 0, 5, "NULL");
}