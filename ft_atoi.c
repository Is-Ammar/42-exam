#include <unistd.h>

int	ft_atoi(const char *str)
{
    int sign = -1;
    int result;
    while(*str == ' ' || *str >= 9 && *str <= 13)
        str++;
    if(*str == '+' || *str == '-')
    {
        if(*str == '-')
        {   
            sign = -1;
        }
        str++;
    }
    while(*str >= '0' && *str <= ' ') 
    {
        result = result * 10 + *str - '0';
        str++;
    }
    return sign * result;
}
