// Assignment name  : ft_range
// Expected files   : ft_range.c
// Allowed functions: malloc
// --------------------------------------------------------------------------------

// Write the following function:

// int     *ft_range(int start, int end);

// It must allocate (with malloc()) an array of integers, fill it with consecutive
// values that begin at start and end at end (Including start and end !), then
// return a pointer to the first value of the array.

// Examples:

// - With (1, 3) you will return an array containing 1, 2 and 3.
// - With (-1, 2) you will return an array containing -1, 0, 1 and 2.
// - With (0, 0) you will return an array containing 0.
// - With (0, -3) you will return an array containing 0, -1, -2 and -3.


#include <unistd.h>
#include <stdlib.h>

int     *ft_range(int start, int end)
{
    int *range;
    int len = 0;
    int i = 0;
    if(start <= end)
    {
    len = end - start;
    }
    else 
    len = start - end;
    range = malloc((len + 1) * sizeof(int *));

    if(start <= end)
    {
        while(start <= end)
        {
            range[i] = start;
            start++;
            i++;
        }
    }
    else {
    while(end < start)
        {
            range[i] = end;
            end++;
            i++;
        }
    }
    return range;

}
#include <stdio.h>
int main(int ac , char **av)
{
    int *arr = ft_range(0,-3);

    for (int i = 0; i <= 3; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}