#include <stdio.h>
#include <unistd.h>

int	ft_atoi_base(const char *str, int str_base)
{
    int result = 0;
    int sign = 1;
    int c = 0;
    int i = 0;
    if(str_base <  2 || !str || !str[i] || str_base > 16)
        return 0;
    while(str[i] <= 32)
        i++;
    if(str[i] == '+')
    {
        i++;
    }
    if(str[i] == '-')
    {
            sign = -1;
            i++;
    }
    while(str[i])
    {
        if(str[i] >= '0' && str[i] <= '9')
            c = str[i] - '0';
        else if(str[i] >= 'a' && str[i] <= 'f')
            c = str[i] - 'a' + 10;
        else if(str[i] >= 'A' && str[i] <= 'F')
            c = str[i] - 'A' + 10;
        else
            break;
        result = result * str_base + c;
        i++;
    }
    return (sign *result);
}
