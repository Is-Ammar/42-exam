/*Assignment name  : str_capitalizer
Expected files   : str_capitalizer.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes one or several strings and, for each argument,
capitalizes the first character of each first (If it's a letter, obviously),
puts the rest in lowercase, and displays the result on the standard output,
followed by a \n.

A "first" is defined as a part of a string delimited either by spaces/tabs, or
by the start/end of the string. If a first only has one letter, it must be
capitalized.

If there are no arguments, the progam must display \n.

Example:

$> ./str_capitalizer | cat -e
$
$> ./str_capitalizer "a FiRSt LiTTlE TESt" | cat -e
A First Little Test$
$> ./str_capitalizer "__SecONd teST A LITtle BiT   Moar comPLEX" "   But... This iS not THAT COMPLEX" "     Okay, this is the last 1239809147801 but not    the least    t" | cat -e
__second Test A Little Bit   Moar Complex$
   But... This Is Not That Complex$
     Okay, This Is The Last 1239809147801 But Not    The Least    T$
$>*/

#include <unistd.h>

int ft_isdelim(char c)
{
    return(c == ' ' || (c >= 9 && c <= 13));        
}

int main(int ac, char **av)
{
    int i = 1;
    int first;
    if (ac > 1)
    {
        while(i < ac)
        {
            int j = 0;
            first = 1;
            while(av[i][j])
            {
                if(first && av[i][j] >= 'a' && av[i][j] <= 'z')
                {
                    av[i][j] -= 32;
                    first = 0;
                }
                else if (first && av[i][j] >= 'A' && av[i][j] <= 'Z')
                {
                    first = 0;
                }
                else if(!first && av[i][j] >= 'A' && av[i][j] <= 'Z')
                    av[i][j] += 32;
                if (ft_isdelim(av[i][j]))
                    first = 1;
                write(1, &av[i][j], 1);
                j++;
            }
            write(1, "\n", 1);
            i++;
        }
    }
    else
        write(1, "\n", 1);
}