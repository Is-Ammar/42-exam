/*Assignment name  : ft_itoa
Expected files   : ft_itoa.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write a function that takes an int and converts it to a null-terminated string.
The function returns the result in a char array that you must allocate.

Your function must be declared as follows:

char	*ft_itoa(int nbr);*/
#include <stdlib.h>
#include <stdio.h>

int alloc_len(int n)
{
    int count = 0;
    if (n <= 0)
    {
        count++;
    }
    while(n != 0)
    {
        n = n / 10;
        count++;
    }
    return count;
}
char	*ft_itoa(int nbr)
{
    long nb;
    nb = nbr;
    char *p;
    int len = alloc_len(nb);
    p = malloc((len + 1) * sizeof(char));
    if(!p)
        return NULL;
    if(nb < 0)
    {
        p[0] = '-';
        nb = -nb;
    }
    if (nb == 0)
        p[0] == '0';
    p[len] = '\0';
    len--;
    while(nb != 0)
    {
        p[len] = nb % 10 + '0';
        nb = nb / 10;
        len--;
    }
    return p;
}
int main()
{
    int n = 12345;
    char *result = ft_itoa(n);
    printf("%s", result);
}
