#include "testlib.h"

void test_ft_lstdelone(t_list **lst, void (*del)(void *), char *expected)
{
    t_list *temp = (*lst)->next;
    ft_lstdelone(*lst, del);
    *lst = temp;

    if (*lst && strcmp((char *)(*lst)->content, expected) == 0)
    {
        printf(BLUE"ft_lstdelone deleted the first element correctly: %s\n"RESET, (char *)(*lst)->content);
    }
    else
    {
        printf(RED"ft_lstdelone failed to delete the first element: %s\n"RESET, (char *)(*lst)->content);
    }
    printf(GREEN"\t|=> Expected: %s\n\t|=> Got: %s\n"RESET, expected, (char *)(*lst)->content);
}

void main_test_lstdelone()
{
    char *first = (char *)malloc(sizeof(char) * 15);
    char *second = (char *)malloc(sizeof(char) * 15);
    strcpy(first, "Hello,");
    strcpy(second, "_world!");
    t_list *head = ft_lstnew(first);
    t_list *new_node = ft_lstnew(second);

    ft_lstadd_back(&head, new_node);

    printf(RED"\nRunning main_test_ft_lstdelone...\n"RESET);

    printf(ORANGE"Running test_ft_lstdelone...\n"RESET);
    test_ft_lstdelone(&head, &del, "_world!");
    free(head->content);
    free(head);
}
