#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
int     *ft_range(int start, int end)
{
    int *array;
    int size;
    if(start <= end)
    {
        size = end - start + 1;
    }
    else 
    {
        size = start - end + 1;
    }
    array = malloc((size) * sizeof(int));
    if(!array)
        return NULL;
    int i = 0;
    if(start <= end)
    {
        while(start <= end)
        {
            array[i++] = start++;
        }
    }else 
    {
        while (start >= end)
        {
            array[i++] = start--;
        }
    }
    return array;
}
int main()
{
    int start = 3;
    int end = 0;
    int *range =  ft_range(start, end);
    int i = 0;
    while (start <= end)
    {
        printf("%d", range[i++]);
        start++;
    }
}