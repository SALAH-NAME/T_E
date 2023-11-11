#include <stdio.h>
#include <stdlib.h>

char test_func(unsigned int i, char c)
{
    return c + i;
}

void test_ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char *str = ft_strmapi(s, f);
    if (str)
    {
        printf("The string \"%s\" mapped with test_func is \"%s\"\n", s, str);
        free(str);
    }
    else
    {
        printf("Cannot map \"%s\" with test_func (NULL returned)\n", s);
    }
}

int main()
{
    test_ft_strmapi("Hello", test_func); // "Hfnop"
    test_ft_strmapi("", test_func); // ""
    test_ft_strmapi(NULL, test_func); // NULL
    test_ft_strmapi("Hello", NULL); // NULL

    return 0;
}

