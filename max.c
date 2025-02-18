/*Assignment name  : max
Expected files   : max.c
Allowed functions:
--------------------------------------------------------------------------------

Write the following function:

int		max(int* tab, unsigned int len);

The first parameter is an array of int, the second is the number of elements in
the array.

The function returns the largest number found in the array.

If the array is empty, the function returns 0.*/


#include <stdio.h>
int max(int *tab, unsigned int len)
{
 int result;
 int i = 0;
 result = tab[i];
 while(i < len)
 {
    if(result < tab[i])
    {
        result = tab[i];
    }
    i++;
 }
 return result;
}

int main()
{
    int arr[] = {22,1,32,232};
    printf("%d", max(arr, 4));
}