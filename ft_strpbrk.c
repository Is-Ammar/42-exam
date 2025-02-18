#include <stdio.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
    while(*s1)
    {
       const char *a = s2;
        while(*a)
        {
            if(*s1 == *a)
            {
                return (char *)s1;
            }
            a++;
        }
        s1++;
    }
    return NULL;
}
int main()
{
    const char *result = ft_strpbrk("helllo", "iusldd");
    printf("%s\n", result);
    return 0;
}