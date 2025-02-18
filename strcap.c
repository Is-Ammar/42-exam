#include <unistd.h>

int ft_delim(char c)
{
    return (c == ' ' || (c >= 9 && c <= 13));
}

int main(int ac, char **av)
{
    int i = 1;
    int word;
    if(ac > 1)
    {
    while(i < ac)
     {
        int j = 0;
        word = 1;
        while(av[i][j])
        {
            if(word && av[i][j] >= 'a' && av[i][j] <= 'z')
            {
                av[i][j] -= 32;
                word = 0;
            }
            else if(!word && av[i][j] >= 'A' && av[i][j] <= 'Z')
                av[i][j] += 32;
            if(ft_delim(av[i][j]))
                word = 1;
            write(1, &av[i][j], 1);
            j++;
        }
        write(1, "\n", 1);
        i++;
     }
    }
    else 
    {
        write(1, "\n", 1);
    }
    return 0;
}