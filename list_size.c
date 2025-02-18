/*Assignment name  : ft_list_size
Expected files   : ft_list_size.c, ft_list.h
Allowed functions:
--------------------------------------------------------------------------------

Write a function that returns the number of elements in the linked list that's
passed to it.

It must be declared as follows:

int	ft_list_size(t_list *begin_list);

You must use the following structure, and turn it in as a file called
ft_list.h:

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct    s_list

{
    struct s_list *next;
    void          *data;
}                 t_list;

t_list *create_node(void *data)
{
    t_list *node = (t_list *)malloc(sizeof(t_list));
    node->data = data;
    node->next = NULL;
    return node;    
}
int	ft_list_size(t_list *begin_list)
{
    int count = 0;
    while(begin_list)
    {
        count++;
        begin_list = begin_list->next;
    }
    return count;
}
int main()
{
    t_list *node1 = create_node((void *)23);
    t_list *node2 = create_node((void *)12);
    t_list *node3 = create_node((void *)58);

    node1->next = node2;
    node2->next = node3;
    node3->next = NULL;

    printf("%d", ft_list_size(node1));
}
