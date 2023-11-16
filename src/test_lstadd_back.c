#include "testlib.h"

void test_ft_lstadd_back(t_list **lst, t_list *new, char *expected)
{
    ft_lstadd_back(lst, new);
    t_list *last = ft_lstlast(*lst);

    if (last && strcmp((char *)last->content, expected) == 0)
    {
        printf(BLUE"ft_lstadd_back added a new list at the back: %s\n"RESET, (char *)new->content);
    }
    else
    {
        printf(RED"ft_lstadd_back failed to add a new list at the back: %s\n"RESET, (char *)new->content);
    }
    printf(GREEN"\t|=> Expected: %s\n\t|=> Got: %s\n"RESET, expected, (char *)last->content);
}

void main_test_lstadd_back()
{
    t_list *head = ft_lstnew("Hello,");
    t_list *new_node = ft_lstnew("_world!");

    printf(RED"\nRunning main_test_ft_lstadd_back...\n"RESET);

    printf(ORANGE"Running test_ft_lstadd_back...\n"RESET);
    test_ft_lstadd_back(&head, new_node, "_world!");
    free(head->next);
    free(head);
}
