#include <unistd.h>

int ft_atoi_base(char *str, int base)
{
    int num = 0;
    int sign = 1;
    int i = 0;
    char c;
    if(!str || !*str || base < 2 || base > 16)
        return 0;
    while(str[i] <= 32)
        i++;
    if(str[i] == '-' || str[i] == '+')
    {
        if(str[i] == '-')
        {
            sign = -sign;
        }
        i++;
    }
    while(str[i])
    {
            if(str[i] >= '0' && str[i] <= '9')
            {
                c = str[i] - '0';
            }
            else if(str[i] >= 'a' && str[i] <= 'f')
            {
                c = str[i] - 'a' + 10;
            }
            else if(str[i] >= 'A' && str[i] <= 'F')
            {
                c = str[i] - 'A' + 10;
            }
            else 
                break;
            num = num * base + c;
        i++;
    }
    return num *sign;
}
