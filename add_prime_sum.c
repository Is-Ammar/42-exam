/*Assignment name  : add_prime_sum
Expected files   : add_prime_sum.c
Allowed functions: write, exit
--------------------------------------------------------------------------------

Write a program that takes a positive integer as argument and displays the sum
of all prime numbers inferior or equal to it followed by a newline.

If the number of arguments is not 1, or the argument is not a positive number,
just display 0 followed by a newline.

Yes, the examples are right.

Examples:

$>./add_prime_sum 5
10
$>./add_prime_sum 7 | cat -e
17$
$>./add_prime_sum | cat -e
0$
$>*/

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}
void ft_putnb(int nb)
{
    if(nb > 9)
    {
        ft_putnb(nb / 10);
        ft_putchar(nb % 10 + '0');
    }
    else
    {
        ft_putchar(nb % 10 + '0');
    }
} 

int ft_prime(int a)
{
    if (a < 2)
    {
       return 0;
    }
    int i = 2;
    while(i * i  <= a)
    {
        if(a % i == 0)
        {
            return 0;
        }
        i++;
    }
    return 1;
}

int ft_atoi(char *str)
{
    int sign = 1;
    int result = 0;
    while(*str && *str == ' ' && *str >= 9 && *str <= 13)
    {
        str++;
    }
    if(*str == '+' || *str == '-')
    {
        if(*str == '-')
        {
            sign = -1;
        }
        str++;
    }
    while (*str && *str >= '0' && *str <= '9')
    {
        result = result * 10 + *str - '0';
        str++;
    }
    return sign * result;
}

int main(int ac, char **av)
{
    if(ac != 2)
    {
        write(1, "0\n", 2);
        return 0;
    }
    int i = 2;
    int sum = 0;
    int num = ft_atoi(av[1]);
    if(num <= 0)
    {
        write(1, "0\n", 2);
        return 0;
    }
    while (i <= num)
    {
        if(ft_prime(i))
        {
            sum += i;
        }
        i++;
    }
    ft_putnb(sum);
    write(1, "\n", 1);
}
