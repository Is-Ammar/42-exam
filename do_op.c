#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
    if(ac != 4)
    {
        write(1, "\n", 1);
        return 0;
    }
    if (av[2][0] == '+')
    {
        printf("%d", atoi(av[1]) + atoi(av[3]));
    }
    else if(av[2][0] == '-')
    {
        printf("%d", atoi(av[1]) - atoi(av[3]));
    }
    else if(av[2][0] == '/')
    {
        printf("%d", atoi(av[1]) / atoi(av[3]));
    }
    else if(av[2][0] == '*')
    {
        printf("%d", atoi(av[1]) * atoi(av[3]));
    }else if(av[2][0] == '%')
    {
        printf("%d", atoi(av[1]) % atoi(av[3]));
    }
    printf("\n");
    return 0;
}
