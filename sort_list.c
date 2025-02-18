
typedef struct s_list {
    int data;
    struct s_list *next;
} t_list;

#include <stdlib.h>

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
    int temp;
    t_list *hold;

    hold = lst;
    while(lst != NULL && lst->next != NULL)
    {
        if(cmp(lst->data, lst->next->data) > 0)
        {
            temp = lst->data;
            lst->data = lst->next->data;
            lst->next->data = temp;
            lst = hold;
        }
        else
            lst = lst->next;
    }
    return hold;
}