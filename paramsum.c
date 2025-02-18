/*Assignment name  : paramsum
Expected files   : paramsum.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that displays the number of arguments passed to it, followed by
a newline.

If there are no arguments, just display a 0 followed by a newline.

Example:

$>./paramsum 1 2 3 5 7 24
6
$>./paramsum 6 12 24 | cat -e
3$
$>./paramsum | cat -e
0$
$>*/

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
    int i = 0;
    int j = 0;
    int k = 1;
    int count = 0;
    if(ac > 1)
    {
        while (k < ac)
        {
            int j = 0;
            while(av[i][j])
            {
                j++;
            }
            count++;
            k++;
        }
    }else{
        write(1, "0\n", 2);
        return 0;
    }
    ft_putnb(count);
    ft_putchar('\n');
    return 0;
}