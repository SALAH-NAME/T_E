#include "testlib.h"

void test_ft_calloc(size_t nmemb, size_t size, char *expected)
{
    void *ptr = ft_calloc(nmemb, size);
    if (ptr)
    {
        printf(BLUE"Allocated %zu bytes.\n"RESET, nmemb * size);
        free(ptr);
    }
    else
    {
        printf(BLUE"Memory allocation failed.\n"RESET);
    }
    printf(GREEN"\t|=> %s\n"RESET, expected);
}

void test_ft_strdup(const char *s, char *expected)
{
    char *dup = ft_strdup(s);
    if (dup)
    {
        printf(BLUE"Duplicated string: \"%s\"\n"RESET, dup);
        free(dup);
    }
    else
    {
        printf(BLUE"String duplication failed.\n"RESET);
    }
    printf(GREEN"\t|=> %s\n"RESET, expected);
}

void main_ft_mallfunctions()
{
    printf(RED"\nRunning main_ft_memfunctions...\n"RESET);

    printf(ORANGE"Running test_ft_calloc...\n"RESET);
    test_ft_calloc(10, sizeof(int), "Success");
    test_ft_calloc(0, sizeof(int), "Success");
    test_ft_calloc(10, 0, "Success");
    test_ft_calloc(0, 0, "Success");

    printf(ORANGE"Running test_ft_strdup...\n"RESET);
    test_ft_strdup("Hello, world!", "Success");
    test_ft_strdup("", "Success");
}
