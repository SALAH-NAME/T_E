#include "testlib.h"

void test_ft_lstlast(t_list **lst, char *expected)
{
    t_list *last = ft_lstlast(*lst);

    if (last && strcmp((char *)last->content, expected) == 0)
    {
        printf(BLUE"ft_lstlast returned the correct last element: %s\n"RESET, (char *)last->content);
    }
    else
    {
        printf(RED"ft_lstlast returned incorrect last element: %s\n"RESET, (char *)last->content);
    }
    printf(GREEN"\t|=> Expected: %s\n\t|=> Got: %s\n"RESET, expected, (char *)last->content);
}

void main_test_lstlast()
{
    t_list *head = ft_lstnew("_world!");
    t_list *new_node = ft_lstnew("Hello,");

    ft_lstadd_front(&head, new_node);

    printf(RED"\nRunning main_test_ft_lstlast...\n"RESET);

    printf(ORANGE"Running test_ft_lstlast...\n"RESET);
    test_ft_lstlast(&head, "_world!");
    free(head->next);
    free(head);
}
