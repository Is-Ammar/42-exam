#include "ft_list.h"
#include <stdio.h>

int ft_list_size(t_list *begin_list) {
    int count = 0;
    t_list *ptr = begin_list;  // Initialize ptr to the beginning of the list
    while (ptr != NULL) {      // Corrected the condition
        count++;
        ptr = ptr->next;
    }
    return count;
}

int main() {
    // Create nodes
    t_list node3 = {NULL, NULL};
    t_list node2 = {NULL, &node3};
    t_list node1 = {NULL, &node2};

    // Calculate the size of the list
    int size = ft_list_size(&node1);
    printf("List size: %d\n", size);

    return 0;
}