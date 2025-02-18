#include <unistd.h>

int main(int ac, char **av)
{

    if(ac != 2)
    {
        write(1, "\n", 1);
        return 0;
    }
    int i = 0;
    while (av[2][i])
    {
        int j = 0;
        if(av[1][j] == av[2][i])
        {
            j++;
        }
        i++;
    }
    int j = 0;
    if(av[1][j] == '\0')
    {
        write(1, &av[1][j], 1);
    }
    return 0;
}