#include "testlib.h"

void test_ft_split(char const *s, char c, char *expected)
{
    char **strs = ft_split(s, c);
    if (strs)
    {
        printf(BLUE"Splitting \"%s\" by '%c' gives:\n"RESET, s, c);
        for (size_t i = 0; strs[i]; i++)
        {
            printf("\"%s\"\n", strs[i]);
            free(strs[i]);
        }
        free(strs);
    }
    else
        printf(BLUE"Cannot split \"%s\" by '%c' (NULL returned)\n"RESET, s, c);
    printf(GREEN"\t|=> %s\n"RESET, expected);
}

void main_test_split()
{

	printf(RED"\nRunning main_test_split..\n"RESET);

    printf(ORANGE"Running test_ft_split..\n"RESET);
    test_ft_split("Hello World", ' ', "'Hello', 'World'");
    test_ft_split("", ' ', "nothing");
    test_ft_split("Hello World", 'H', "nothing, 'ello World'");
    test_ft_split("Hello World", 'd', "'Hello Worl', nothing");
    test_ft_split(NULL, ' ', "NULL");

}