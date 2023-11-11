#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void test_ft_itoa(int n)
{
    char *str = ft_itoa(n);
    if (str)
    {
        printf("The string representation of %d is \"%s\"\n", n, str);
        free(str);
    }
    else
    {
        printf("Cannot convert %d to string (NULL returned)\n", n);
    }
}

int main()
{
    test_ft_itoa(12345); // "12345"
    test_ft_itoa(-12345); // "-12345"
    test_ft_itoa(0); // "0"
    test_ft_itoa(INT_MAX); // "2147483647"
    test_ft_itoa(INT_MIN); // "-2147483648"

    return 0;
}
