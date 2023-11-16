#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

typedef struct s_list
{
    void *content;
    struct s_list *next;
} t_list;

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
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	temp = *lst;
	if (temp == NULL)
	{
		*lst = new;
		return ;
	}
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = new;
}



void del(void *content)
{
    free(content);
}
void ft_lstdelone(t_list *lst, void (*del)(void *))
{
    if (lst == NULL || del == NULL)
    {
        return;
    }

    del(lst->content);
    free(lst);
}
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	while (*lst)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
}

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

void print_content(void *content)
{
    printf("%d\n", *(int *)content);
}


t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*temp;
	t_list	*new;

	if (!lst || !f)
		return (NULL);
	temp = ft_lstnew(f(lst->content));
	if (!temp)
	{
		ft_lstclear(&lst, del);
		return (NULL);
	}
	new = temp;
	lst = lst->next;
	while (lst)
	{
		temp = ft_lstnew(f(lst->content));
		if (!temp)
		{
			ft_lstclear(&lst, del);
			ft_lstclear(&new, del);
			break ;
		}
		lst = lst->next;
		ft_lstadd_back(&new, temp);
	}
	return (new);
}


void *increment(void *content)
{
    int *new_content = malloc(sizeof(int));
    *new_content = *(int *)content + 1;
    return new_content;
}

int main(void)
{

    t_list *node0 = (t_list *)malloc(sizeof(t_list));
    t_list *node1 = (t_list *)malloc(sizeof(t_list));
    t_list *node2 = (t_list *)malloc(sizeof(t_list));
    t_list *node3 = (t_list *)malloc(sizeof(t_list));
    int *cnt0 = malloc(sizeof(int));
    int *cnt1 = malloc(sizeof(int));
    int *cnt2 = malloc(sizeof(int));
    int *cnt3 = malloc(sizeof(int));
    *cnt1 = 13;
    *cnt2 = 37;
    *cnt3 = 42;
    
    node0->content = cnt0;
    node0->next = NULL;
    *(int *)node0->content = 1337;
    
    printf("%d\n", *(int *)node0->content);
    ft_lstdelone(node0, del);
    
    node1->content = cnt1;
    node1->next = node2;
    node2->content = cnt2;
    node2->next = node3;
    node3->content = cnt3;
    node3->next = NULL;

    ft_lstiter(node1, print_content);
    
		printf("\nNEW_LIST\n");    
    t_list *new_lst = ft_lstmap(node1, increment, del);
    ft_lstiter(new_lst, print_content);

    ft_lstclear(&new_lst, del);
    ft_lstclear(&node1, del);
    
    
    
    
    return 0;
}
