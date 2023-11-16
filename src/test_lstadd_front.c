#include "testlib.h"

void test_ft_lstadd_front(t_list **lst, t_list *new, char *expected)
{
    ft_lstadd_front(lst, new);

    if (*lst && (*lst) == new)
    {
        printf(BLUE"ft_lstadd_front added a new list at the front: %s\n"RESET, (char *)new->content);
    }
    else
    {
        printf(RED"ft_lstadd_front failed to add a new list at the front: %s\n"RESET, (char *)new->content);
    }
    if (*lst)
        printf(GREEN"\t|=> Expected: %s\n\t|=> Got: %s\n"RESET, expected, (char *)(*lst)->content);
}

void main_test_lstadd_front()
{
    t_list *head = ft_lstnew("_world!");
    t_list *new_node = ft_lstnew("Hello,");

    printf(RED"\nRunning main_test_ft_lstadd_front...\n"RESET);

    printf(ORANGE"Running test_ft_lstadd_front...\n"RESET);
    test_ft_lstadd_front(&head, new_node, "Hello,");
    free(head->next);
    free(head);
}
