#include <stdio.h>
#include <stdlib.h>
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}                   t_list;

t_list	*ft_lstnew(void *content)
{
	t_list	*temp;

	temp = (t_list *)malloc(sizeof(t_list));
	if (!temp)
		return (NULL);
	temp->content = content;
	temp->next = NULL;
	return (temp);
}


void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new)
	{
		new->next = *lst;
		*lst = new;
	}
}

void    test_ft_lstadd_front(void)
{
    t_list  *lst;
    t_list  *new;

    lst = ft_lstnew("World");
    new = ft_lstnew("Hello");
    ft_lstadd_front(&lst, new);
    if (lst != new)
    {
        printf("Test failed: expected lst to be %p, got %p\n", new, lst);
				free(lst->next);
        free(lst);
        return ;
    }
    if (lst->next != new->next)
    {
        printf("Test failed: expected lst->next to be %p, got %p\n", new->next, lst->next);
				free(lst->next);
        free(lst);
        return ;
    }
    printf("Test passed\n");
    free(lst->next);
    free(lst);
}

int     main(void)
{
    test_ft_lstadd_front();
    return (0);
}
