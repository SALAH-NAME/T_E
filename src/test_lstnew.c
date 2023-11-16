#include "testlib.h"

void test_ft_lstnew(void *content, t_list *expected)
{
    t_list *result = NULL;
    result = ft_lstnew(content);
    if (result != NULL && result->content == content && result->next == NULL)
    {
        printf(BLUE"ft_lstnew created a new list with content: %p\n"RESET, content);
    }
    else
    {
        printf(RED"ft_lstnew failed to create a new list with content: %p\n"RESET, content);
    }
    if (result)
    {
        printf(GREEN"\t|=> Expected: %p\n\t|=> Got: %p\n"RESET, expected, result->content);
        free(result);
    }
}

void main_test_lstnew()
{
    char *content = "Hello, world!";

    printf(RED"\nRunning main_test_ft_lstnew...\n"RESET);

    printf(ORANGE"Running test_ft_lstnew...\n"RESET);
    test_ft_lstnew(content, (t_list *)content);
}
