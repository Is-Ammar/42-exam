#include <stdio.h>
#include <stdlib.h>

char    *ft_strdup(char *src)
{
    char *ptr;
    int len;
    while(src[len])
    {
        len++;
    }
    ptr = malloc((len + 1) * sizeof(char));
    if(!ptr)
        return NULL;
    int i = 0;
    while (i <= len)
    {
        ptr[i] = src[i];
        i++;
    }
    return ptr;
}
int main()
{
    printf("%s", ft_strdup("hello"));
}