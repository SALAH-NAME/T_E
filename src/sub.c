
#include <stdio.h>
#include <stdlib.h>


void test_ft_substr(char const *s, unsigned int start, size_t len)
{
    char *substr = ft_substr(s, start, len);
    if (substr)
    {
        printf("\"%s\" starting at %u with length %zu is \"%s\"\n", s, start, len, substr);
        free(substr);
    }
    else
    {
        printf("\"%s\" starting at %u with length %zu cannot be created (NULL returned)\n", s, start, len);
    }
}

int main()
{
    test_ft_substr("Hello, world!", 0, 5); // "Hello"
    test_ft_substr("Hello, world!", 7, 5); // "world"
    test_ft_substr("Hello, world!", 13, 5); // "" out of range
    test_ft_substr("Hello, world!", 0, 50); // "Hello, world!"
    test_ft_substr("", 0, 5); // ""
    test_ft_substr(NULL, 0, 5); // NULL

    return 0;
}
