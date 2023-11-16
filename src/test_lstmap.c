#include "testlib.h"
void test_ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *), char **expected)
{
    t_list *new_lst = ft_lstmap(lst, f, del);
    t_list *temp = new_lst;
    int i = 0;

    while (temp)
    {
        if (strcmp((char *)temp->content, expected[i]) != 0)
        {
            printf(RED"ft_lstmap failed to create a new list with modified content: %s\n"RESET, (char *)temp->content);
            return;
        }
        temp = temp->next;
        i++;
    }
    printf(BLUE"ft_lstmap successfully created a new list with modified content\n"RESET);
    i = 0;
    temp = new_lst;
    while (temp)
    {
        printf(GREEN"\t|=> Expected: %s\n\t|=> Got: %s\n", expected[i],(char *)temp->content);
        i++;
        temp = temp->next;
    }
}

void main_test_lstmap()
{
    char *first = (char *)malloc(sizeof(char) * 15);
    char *second = (char *)malloc(sizeof(char) * 15);
    strcpy(first, "Hello,");
    strcpy(second, "_world!");
    t_list *head = ft_lstnew(first);
    t_list *new_node = ft_lstnew(second);

    ft_lstadd_back(&head, new_node);

    printf(RED"\nRunning main_test_ft_lstmap...\n"RESET);

    printf(ORANGE"Running test_ft_lstmap...\n"RESET);
    char *expected[] = {"HELLO,", "_WORLD!"};
    test_ft_lstmap(head, &to_upper, &del, expected);
    if (head)
        ft_lstclear(&head, del);
}
