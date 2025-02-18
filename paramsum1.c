#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnb(int n)
{
    if(n > 9)
    {
        ft_putnb(n / 10);
        ft_putchar(n % 10 + '0');
    }else
    {
        ft_putchar(n + '0');
    } 
}

int main(int ac, char **av)
{
    if(ac > 1)
    {
        ft_putnb(ac - 1);
    }else 
    {
        ft_putchar('0');
    }
    ft_putchar('\n');

    return 0;
}