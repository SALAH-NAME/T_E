#include <stdlib.h>
#include <stdio.h>
#include <string.h>


void test_toupper(unsigned int i, char *c)
{
    (void) i;
    if (*c >= 'a' && *c <= 'z')
        *c = *c - 'a' + 'A';
}

void test_ft_striteri(char *s)
{
    ft_striteri(s, test_toupper);
    if (s)
    {
        printf("After applying ft_striteri on \"%s\", we get \"%s\"\n", s, s);
    }
    else
    {
        printf("NULL string cannot be processed (NULL passed)\n");
    }
}

int main()
{
    char str1[] = "Hello World"; // "HELLO WORLD"
    test_ft_striteri(str1);

    char str2[] = ""; // ""
    test_ft_striteri(str2);

    char str3[] = "12345"; // "12345"
    test_ft_striteri(str3);

    test_ft_striteri(NULL); // NULL

    return 0;
}

