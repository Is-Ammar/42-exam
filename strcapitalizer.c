#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>


int main(int ac , char **av)
{
    if(ac > 1)
    {
        int i = 1;
        int j = 0;
        while(av[i])
        {
            j = 0;
            while(av[i][j])
            {
                if(av[i][j] >= 'A' && av[i][j] <= 'Z')
                {
                    av[i][j] += 32;
                }
                if( isalpha(av[i][j]) && ( j == 0 || av[i][j - 1] == ' ' || (av[i][j - 1] == '\t')))
                {
                    av[i][j] -= 32;
                }
                write(1,&av[i][j],1);
                j++;
            }
            write(1 , "\n" , 1);
            i++;
        }
    }
    else
        write(1 , "\n" , 1);
}

