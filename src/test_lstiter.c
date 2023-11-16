#include "testlib.h"

void test_ft_lstiter(t_list *lst, void (*f)(void *), char *expected)
{
    ft_lstiter(lst, f);

    if (strcmp((char *)lst->content, expected) != 0)
    {
        printf(RED"ft_lstiter failed to modify the list content: %s\n"RESET, (char *)lst->content);
        return;
    }
    
    printf(BLUE"ft_lstiter successfully modified the list content : %s\n\t"GREEN"|=> Got: %s\n"RESET, expected, (char *)lst->content);
}

void main_test_lstiter()
{
    char *first = (char *)malloc(sizeof(char) * 15);
    char *second = (char *)malloc(sizeof(char) * 15);
    strcpy(first, "Hello,");
    strcpy(second, "_world!");
    t_list *head = ft_lstnew(first);
    head->next = ft_lstnew(second);


    printf(RED"\nRunning main_test_ft_lstiter...\n"RESET);

    printf(ORANGE"Running test_ft_lstiter...\n"RESET);
    test_ft_lstiter(head, &modify_content, "HELLO,");
    test_ft_lstiter(head->next, &modify_content, "_WORLD!");
    ft_lstclear(&head, del);
}
