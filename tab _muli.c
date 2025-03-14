/*Assignment name  : tab_mult
Expected files   : tab_mult.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that displays a number's multiplication table.

The parameter will always be a strictly positive number that fits in an int,
and said number times 9 will also fit in an int.

If there are no parameters, the program displays \n.

Examples:

$>./tab_mult 9
1 x 9 = 9
2 x 9 = 18
3 x 9 = 27
4 x 9 = 36
5 x 9 = 45
6 x 9 = 54
7 x 9 = 63
8 x 9 = 72
9 x 9 = 81
$>./tab_mult 19
1 x 19 = 19
2 x 19 = 38
3 x 19 = 57
4 x 19 = 76
5 x 19 = 95
6 x 19 = 114
7 x 19 = 133
8 x 19 = 152
9 x 19 = 171
$>
$>./tab_mult | cat -e
$
$>*/


#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int nb)
{
    if(nb > 9)
    {
        ft_putnbr(nb / 10);
        ft_putchar(nb % 10 + '0');
    }else
    {
        ft_putchar(nb + '0');
    }
}

int ft_atoi(char *s)
{
    int sign = 1;
    int result = 0;
    while(*s && *s == ' ' || *s >= 9 && *s <= 13)
    {
        s++;
    }
    if(*s == '+' || *s == '-')
    {
        if(*s == '-')
        {
            sign = -1;
        }
        s++;
    }
    while(*s >= '0' && *s <= '9')
    {
        result = result * 10 + *s - '0';
        s++;
    }
    return sign * result;
}

int main(int ac, char **av)
{
    if(!ac > 1)
    {
    int i = 1;
    int number = ft_atoi(av[1]);
    if(number <= 0)
    {
        write(1, "\n", 1);
        return 0;
    }
    while (i <= 9)
    {
        ft_putnbr(i);
        write(1, " x ", 3);
        ft_putnbr(number);
        write (1, " = ", 3);
        ft_putnbr(i * number);
        write(1, "\n", 1);
        i++;
    }
    }else 
    {
        write(1, "\n", 1);
    }
    return (0);
}