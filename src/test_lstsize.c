#include "testlib.h"

void test_ft_lstsize(t_list **lst, int expected)
{
    int size = ft_lstsize(*lst);

    if (size == expected)
    {
        printf(BLUE"ft_lstsize returned the correct size: %d\n"RESET, size);
    }
    else
    {
        printf(RED"ft_lstsize returned incorrect size: %d\n"RESET, size);
    }
    printf(GREEN"\t|=> Expected: %d\n\t|=> Got: %d\n"RESET, expected, size);
}

void main_test_lstsize()
{
    t_list *head = ft_lstnew("111");
    head->next = ft_lstnew("222");
    head->next->next = ft_lstnew("333");
    head->next->next->next = ft_lstnew("444");


    printf(RED"\nRunning main_test_ft_lstsize...\n"RESET);

    printf(ORANGE"Running test_ft_lstsize...\n"RESET);
    test_ft_lstsize(&head, 4);
    free(head->next->next->next);
    free(head->next->next);
    free(head->next);
    free(head);
}
