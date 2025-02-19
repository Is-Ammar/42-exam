#include <unistd.h>

int main(int ac , char **av)
{
    if(ac == 2)
    {
        char *str = av[1];
        int i = 0;
        while(str[i])
            i++;
        i--;
        while(str[i] == ' ' || str[i] == '\t')
            i--;
        while(str[i] != ' ' && str[i] != '\t')
            i--;
        i++;
        while(str[i] != ' ' && str[i] != '\t' && str[i])
            {
                write(1,&str[i],1);
                i++;
            }
    }
    write(1,"\n",1);
}