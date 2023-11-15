#include "testlib.h"

void test_ft_strlcpy(char *dst, const char *src, size_t dstsize, char *expected)
{
    size_t result = ft_strlcpy(dst, src, dstsize);
    printf(BLUE"After strlcpy: %s - size_t: %zu"RESET, dst, result);
    printf(GREEN"\t|=> %s\n"RESET, expected);
}

void test_ft_strlcat(char *dst, const char *src, size_t dstsize, char *expected)
{
    size_t result = ft_strlcat(dst, src, dstsize);
    printf(BLUE"After strlcat: %s - size_t: %zu"RESET, dst, result);
    printf(GREEN"\t|=> %s\n"RESET, expected);
}

void main_ft_strlfunctions()
{
    printf(RED"\nRunning main_ft_strlfunctions...\n"RESET);

    printf(ORANGE"Running test_ft_strlcpy...\n"RESET);
    char dst1[50] = "Hello,_";
    char src1[50] = "world!";
    test_ft_strlcpy(dst1, src1, sizeof(dst1), "world! - size_t: 6");

    char dst2[50] = "Hello,_";
    char src2[50] = "world!";
    test_ft_strlcpy(dst2, src2, 0, "Hello,_ - size_t: 6");

    printf(ORANGE"Running test_ft_strlcat...\n"RESET);
    char dst3[50] = "Hello,_";
    char src3[50] = "world!";
    test_ft_strlcat(dst3, src3, sizeof(dst3), "Hello,_world! - size_t: 13");

    char dst4[50] = "Hello,_";
    char src4[50] = "world!";
    test_ft_strlcat(dst4, src4, 0, "Hello,_ - size_t: 6");
}
