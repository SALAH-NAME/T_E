#include "testlib.h"

void test_ft_memset(char *start, char *from, int c, size_t n, char *expected)
{
    ft_memset(from, c, n);
    printf(BLUE"After memset: %s\n"RESET, start);
    printf(GREEN"\t|=> %s\n"RESET, expected);
}

void test_ft_bzero(char *start, char *from, size_t n, char *expected)
{
    ft_bzero(from, n);
    printf(BLUE"After bzero: %s\n"RESET, start);
    printf(GREEN"\t|=> %s\n"RESET, expected);
}

void test_ft_memcpy(char *dest, const char *src, size_t n, char *expected)
{
    ft_memcpy(dest, src, n);
    printf(BLUE"After memcpy: %s\n"RESET, dest);
    printf(GREEN"\t|=> %s\n"RESET, expected);
}

void test_ft_memmove(char *start, char *dest, const char *src, size_t n, char *expected)
{
    ft_memmove(dest, src, n);
    printf(BLUE"After memmove: %s\n"RESET, start);
    printf(GREEN"\t|=> %s\n"RESET, expected);
}

void test_ft_memchr(const void *s, int c, size_t n, char *expected)
{
    char *p = ft_memchr(s, c, n);
    if (p)
        printf(BLUE"Character '%c' found at position: %ld\n"RESET, c, p - (char *)s);
    else
        printf(BLUE"Character '%c' not found\n"RESET, c);
    printf(GREEN"\t|=> %s\n"RESET, expected);
}

void test_ft_memcmp(const void *s1, const void *s2, size_t n, char *expected)
{
    int result = ft_memcmp(s1, s2, n);
    if (result > 0)
        printf(BLUE"str1 is greater than str2\n"RESET);
    else if (result < 0)
        printf(BLUE"str1 is less than str2\n"RESET);
    else
        printf(BLUE"str1 is equal to str2\n"RESET);
    printf(GREEN"\t|=> %s\n"RESET, expected);
}

void main_ft_memfunctions()
{
    printf(RED"\nRunning main_ft_memfunctions...\n"RESET);

    printf(ORANGE"Running test_ft_memset...\n"RESET);
    char str1[50] = "Hello, world!";
    test_ft_memset(str1, str1 + 7, '*', 5, "Hello, *****!");
    char str2[50] = "Hello, world!";
    test_ft_memset(str2, str2, '*', 0, "Hello, world!");

    printf(ORANGE"Running test_ft_bzero...\n"RESET);
    char str3[50] = "Hello, world!";
    test_ft_bzero(str3, str3 + 7, 5, "Hello, \0\0\0\0\0d!");
    char str4[50] = "Hello, world!";
    test_ft_bzero(str4, str4, 0, "Hello, world!");

    printf(ORANGE"Running test_ft_memcpy...\n"RESET);
    char src[50] = "Hello, world!";
    char dest[50];
    test_ft_memcpy(dest, src, strlen(src) + 1, "Hello, world!");
    char dest2[50];
    test_ft_memcpy(dest2, src, 0, "");

    printf(ORANGE"Running test_ft_memmove...\n"RESET);
    char str5[50] = "Hello, world!";
    test_ft_memmove(str5, str5 + 7, str5 + 8, 5, "Hello, orld!!");
    char str6[50] = "Hello, world!";
    test_ft_memmove(str6, str6 + 7, str6 + 8, 0, "Hello, world!");

    printf(ORANGE"Running test_ft_memchr...\n"RESET);
    char str7[50] = "Hello, world!";
    test_ft_memchr(str7, 'w', strlen(str7), "Character 'w' found at position: 7");
    char str8[50] = "Hello, world!";
    test_ft_memchr(str8, 'w', 0, BR"Character 'w' not found"RESET);

    printf(ORANGE"Running test_ft_memcmp...\n"RESET);
    char str9[50] = "Hello, world!";
    char str10[50] = "Hello, World!";
    test_ft_memcmp(str9, str10, strlen(str9), "str1 is greater than str2");
    char str11[50] = "Hello, world!";
    char str12[50] = "Hello, world!";
    test_ft_memcmp(str11, str12, 0, "str1 is equal to str2");
    char str13[50] = "Hello, World!";
    char str14[50] = "Hello, world!";
    test_ft_memcmp(str13, str14, strlen(str13), "str1 is less than str2");
}
