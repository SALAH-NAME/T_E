#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
    int x = 1;
    t_list *head = NULL;
    
    int count = ft_lstsize(head);
    printf("count = %d\n", count);
    
    head = ft_lstnew(&x);
    count = ft_lstsize(head);
    printf("count = %d\n", count);
    
    head->next = ft_lstnew(&x);
    count = ft_lstsize(head);
    printf("count = %d\n", count);
    
    free(head->next);
    free(head);
    return 0;
}

