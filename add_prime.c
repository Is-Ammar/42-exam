#include <unistd.h>

void ft_putchar(char c)
{
    write(1,&c,1);
}
void putnbrr(int num)
{
    if(num > 9)
    {
        putnbrr(num/10);
        putnbrr(num%10);
    }
    else
        ft_putchar(num + '0');

}

int ft_atoi(char *str)
{
    int num = 0;
    int sign = 1;
    int i = 0;
    while(str[i] <= 32)
        i++;
    if(str[i] == '-' ||str[i] == '+')
    {
        if(str[i] == '-')
        {
            sign = -sign;
        }
        i++;
    }
    while(str[i] >= '0' && str[i] <= '9')
    {
        num = num*10 + (str[i] - '0');
        i++;
    }
    return num*sign;
}


int is_prime(int num)
{
    if(num < 2)
        return 0;
    int i = 2;
    while(i*i <= num)
    {
        if(num % i == 0)
            return 0;
        i++;
    }
    return 1;
}
int main(int ac , char **av)
{
    if(ac != 2)
    {
        ft_putchar('0');
    }
    if(ac == 2)
    {
        char *str = av[1];
        int num;
        num = ft_atoi(str);
        int i = 0;
        int result= 0;
        while(i <= num)
        {
            if(is_prime(i))
            {
                result += i;
            }
            i++;
        }
        putnbrr(result);
    }
    ft_putchar('\n');
}
