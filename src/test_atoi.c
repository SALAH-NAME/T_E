#include "testlib.h"

void test_ft_atoi(const char *str, int expected)
{
    int result = ft_atoi(str);
    printf(BLUE"ft_atoi(\"%s\") = %d"RESET, str, result);
    printf(GREEN"\t|=> %s\n"RESET, result == expected ? "Success" : "Failure");
}

void main_test_atoi()
{
    printf(RED"\nRunning main_ft_atoi...\n"RESET);

    printf(ORANGE"Running test_ft_atoi...\n"RESET);
    test_ft_atoi("123", 123); 
    test_ft_atoi("-123", -123); 
    test_ft_atoi("   123", 123); 
    test_ft_atoi("123abc", 123); 
    test_ft_atoi("abc123", 0); 
    test_ft_atoi("", 0); 
    test_ft_atoi("2147483647", 2147483647); 
    test_ft_atoi("-2147483648", -2147483648); 
    test_ft_atoi("2147483648", 2147483647);
    test_ft_atoi("-2147483649", -2147483648);
}
