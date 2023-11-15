#include "testlib.h"

void test_toupper(unsigned int i, char *c)
{
    (void) i;
    if (*c >= 'a' && *c <= 'z')
        *c = *c - 'a' + 'A';
}

void test_ft_striteri(char *s, char *expected)
{
    ft_striteri(s, test_toupper);
    if (s)
    {
        printf(BLUE"\"%s\", we get \"%s\"\n"RESET, s, s);
    }
    else
    {
        printf(BLUE"NULL string cannot be processed (NULL passed)\n"RESET);
    }
    printf(GREEN"\t|=> %s\n"RESET, expected);
}

void main_test_striteri()
{
    printf(RED"\nRunning main_test_striteri...\n"RESET);

    printf(ORANGE"Running test_ft_striteri...\n"RESET);
    char str1[] = "Hello World";
    test_ft_striteri(str1, "'HELLO WORLD'");

    char str2[] = "";
    test_ft_striteri(str2, "''");

    char str3[] = "12345";
    test_ft_striteri(str3,"'12345'");

    test_ft_striteri(NULL, "NULL");

}