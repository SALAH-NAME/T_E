#include "testlib.h"

void test_ft_lstclear(t_list **lst, void (*del)(void *))
{
    ft_lstclear(lst, del);

    if (*lst == NULL)
    {
        printf(BLUE"ft_lstclear successfully cleared the list\n"RESET);
    }
    else
    {
        printf(RED"ft_lstclear failed to clear the list\n"RESET);
    }
}

void main_test_lstclear()
{
    char *first = (char *)malloc(sizeof(char) * 15);
    char *second = (char *)malloc(sizeof(char) * 15);
    strcpy(first, "Hello,");
    strcpy(second, "_world!");
    t_list *head = ft_lstnew(first);
    t_list *new_node = ft_lstnew(second);

    ft_lstadd_back(&head, new_node);

    printf(RED"\nRunning main_test_ft_lstclear...\n"RESET);

    printf(ORANGE"Running test_ft_lstclear...\n"RESET);
    test_ft_lstclear(&head, &del);
}
