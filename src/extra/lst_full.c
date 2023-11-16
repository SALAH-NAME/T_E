#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}                   t_list;

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new)
	{
		new->next = *lst;
		*lst = new;
	}
}

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
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

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}




int main()
{
    int x = 2;
    int y = 3;
    int z = 5;
    int v = 7;
    t_list *head = NULL;
    t_list *front = NULL;
    t_list *last = NULL;
    t_list *back = NULL;
    t_list *new_back = NULL;
    
    int count = ft_lstsize(head);
    printf("count = %d\n", count);
    last = ft_lstlast(head);
    printf("last => %p\n", last);
    
    front = ft_lstnew(&z);
    back = ft_lstnew(&v);
    
    ft_lstadd_front(&head,front);
    
    count = ft_lstsize(head);
    printf("count = %d | content = %d | adress = %p\n", count, *(int *)head->content, head);
    
    head = ft_lstnew(&x);
    count = ft_lstsize(head);
    printf("count = %d | content = %d | adress = %p\n", count, *(int *)head->content, head);
    
    head->next = ft_lstnew(&y);
    count = ft_lstsize(head);
    printf("count = %d | content = %d | adress = %p\n", count, *(int *)head->next->content, head->next);
    
    ft_lstadd_back(&head, back);
    count = ft_lstsize(head);
    printf("count = %d | content = %d | adress = %p\n", count, *(int *)head->next->next->content, head->next->next);
    
    last = ft_lstlast(head);
    printf("last  => %p\n", last);
    printf("head  => %p\n", head);
    printf("front => %p\n", front);
    printf("back  => %p\n", back);
    
    printf("\nNEW_BACK\n");
    ft_lstadd_back(&new_back, back);
    count = ft_lstsize(new_back);
    printf("count = %d | content = %d | adress = %p\n", count, *(int *)new_back->content, new_back);
    
    
    free(head->next);
    free(head);
    free(front);
    free(back);
    
    return 0;
}

