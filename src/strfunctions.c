#include "testlib.h"

void test_ft_strchr(const char *s, int c, char *expected)
{
    char *p = ft_strchr(s, c);
    if (p)
        printf(BLUE"'%c' found at position: %ld"RESET, c, p - s);
    else
        printf(BLUE"'%c' not found"RESET, c);
    printf(GREEN"\t|=> %s\n"RESET, expected);
}

void test_ft_strrchr(const char *s, int c, char *expected)
{
    char *p = ft_strrchr(s, c);
    if (p)
        printf(BLUE"'%c' found at position: %ld"RESET, c, p - s);
    else
        printf(BLUE"'%c' not found"RESET, c);
    printf(GREEN"\t|=> %s\n"RESET, expected);
}

void test_ft_strncmp(const char *s1, const char *s2, size_t n, char *expected)
{
    int result = ft_strncmp(s1, s2, n);
    if (result > 0)
        printf(BLUE"str1 is greater than str2"RESET);
    else if (result < 0)
        printf(BLUE"str1 is less than str2"RESET);
    else
        printf(BLUE"str1 is equal to str2"RESET);
    printf(GREEN"\t|=> %s\n"RESET, expected);
}

void test_ft_strlen(const char *s, char *expected)
{
    size_t len = ft_strlen(s);
    printf(BLUE"Length of string is: %zu"RESET, len);
    printf(GREEN"\t|=> %s\n"RESET, expected);
}

void test_ft_strnstr(const char *haystack, const char *needle, size_t len, char *expected)
{
    char *p = ft_strnstr(haystack, needle, len);
    if (p)
        printf(BLUE"'%s' found at position: %ld => '%s'"RESET, needle, p - haystack, p);
    else
        printf(BLUE"'%s' not found"RESET, needle);
    printf(GREEN"\t|=> %s\n"RESET, expected);
}

void main_ft_strfunctions()
{
    printf(RED"\nRunning main_ft_strfunctions...\n"RESET);

    printf(ORANGE"Running test_ft_strchr...\n"RESET);
    char str1[50] = "Hello, world!";
    test_ft_strchr(str1, 'w', "'w' found at position: 7");
    test_ft_strchr(str1, 'z', "'z' not found");

    printf(ORANGE"Running test_ft_strrchr...\n"RESET);
    char str2[50] = "Hello, world!";
    test_ft_strrchr(str2, 'o', "'o' found at position: 8");
    test_ft_strrchr(str2, 'z', "'z' not found");

    printf(ORANGE"Running test_ft_strncmp...\n"RESET);
    char str3[50] = "Hello, world!";
    char str4[50] = "Hello, World!";
    test_ft_strncmp(str3, str4, strlen(str3), "str1 is greater than str2");
    test_ft_strncmp(str3, str4, 0, "str1 is equal to str2");

    printf(ORANGE"Running test_ft_strlen...\n"RESET);
    char str5[50] = "Hello, world!";
    test_ft_strlen(str5, "Length of string is: 13");
    test_ft_strlen("", "Length of string is: 0");

    printf(ORANGE"Running test_ft_strnstr...\n"RESET);
    char str6[50] = "Hello, world!";
    test_ft_strnstr(str6, "world", strlen(str6), "'world' found at position: 7 => 'world!'");
    test_ft_strnstr(str6, "world", 5, "'world' not found");
}
