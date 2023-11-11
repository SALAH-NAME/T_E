#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ftt_strtrim(char const *s1, char const *set) {
    size_t start, end, len;
    
    if (!s1 || !set)
        return NULL;
    
    start = 0;
    while (s1[start] && strchr(set, s1[start]))
        start++;
    
    end = strlen(s1);
    while (end > start && strchr(set, s1[end - 1]))
        end--;
    
    len = end - start;
    char *trimmed = malloc(len + 1);
    if (!trimmed)
        return NULL;
    
    strncpy(trimmed, s1 + start, len);
    trimmed[len] = '\0';
    
    return trimmed;
}



void test_ft_strtrim(char const *s1, char const *set)
{
    char *str = ft_strtrim(s1, set);
    if (str)
    {
        printf("\"%s\" trimmed with \"%s\" is \"%s\"\n", s1, set, str);
        free(str);
    }
    else
    {
        printf("\"%s\" cannot be trimmed with \"%s\" (NULL returned)\n", s1, set);
    }
}

int main()
{
    test_ft_strtrim("Hello World", "Hd"); // "ello Worl"
    test_ft_strtrim("", "Hd"); // ""
    test_ft_strtrim("Hello World", ""); // "Hello World"
    test_ft_strtrim("", ""); // ""
    test_ft_strtrim(NULL, "Hd"); // NULL
    test_ft_strtrim("Hello World", NULL); // NULL
    test_ft_strtrim(NULL, NULL); // NULL

    return 0;
}

