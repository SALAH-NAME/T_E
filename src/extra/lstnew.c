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

	temp = (t_list *)malloc(sizeof(t_list *));
	if (!temp)
		return (NULL);
	temp->content = content;
	temp->next = NULL;
	return (temp);
}

void    test_ft_lstnew(void *content)
{
    t_list  *node;

    node = ft_lstnew(content);
    if (!node)
    {
        printf("Memory allocation failed\n");
        return ;
    }
    if (node->content != content)
    {
        printf("Test failed: expected content to be %p, got %p\n", content, node->content);
        free(node);
        return ;
    }
    if (node->next != NULL)
    {
        printf("Test failed: expected next to be NULL, got %p\n", node->next);
        free(node);
        return ;
    }
    printf("Test passed for content %p\n", content);
    printf("Content of the node: ");
    if (content)
        printf("%s\n", (char *)node->content);
    else
        printf("NULL\n");
    free(node);
}


int     main(void)
{
    int     a = 123456789;
    char    b = 'A';
    char    *c = "Hello, world!";

    test_ft_lstnew(&a);
    test_ft_lstnew(&b);
    test_ft_lstnew(c);
    test_ft_lstnew(NULL);
    return (0);
}

