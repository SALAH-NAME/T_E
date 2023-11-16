#include "testlib.h"

void del(void *content)
{
    free(content);
}

void modify_content(void *content)
{
    char *str = (char *)content;
    while (*str)
    {
        *str = toupper(*str);
        str++;
    }
}

void *to_upper(void *content)
{
    char *str = (char *)content;
    char *new_str = (char *)malloc(sizeof(char) * (strlen(str) + 1));
    int i = 0;

    while (str[i])
    {
        new_str[i] = toupper(str[i]);
        i++;
    }
    new_str[i] = '\0';

    return new_str;
}