#include "testlib.h"

void test_ft_itoa(int n, char *expected)
{
    char *str = ft_itoa(n);
    if (str)
    {
        printf(BLUE"The string representation of %d is \"%s\"\n"RESET, n, str);
        free(str);
    }
    else
        printf(BLUE"Cannot convert %d to string (NULL returned)\n"RESET, n);
    printf(GREEN"\t|=> %s\n"RESET, expected);
}

void main_test_itoa()
{
    printf(RED"\nRunning main_test_itoa...\n"RESET);

    printf(ORANGE"Running test_ft_itoa...\n"RESET);
    test_ft_itoa(12345, "12345");
    test_ft_itoa(-12345, "-12345");
    test_ft_itoa(1000, "1000");
    test_ft_itoa(-1000, "-1000");
    test_ft_itoa(0, "0");
    test_ft_itoa(INT_MAX, "2147483647");
    test_ft_itoa(INT_MIN, "-2147483648");

}
