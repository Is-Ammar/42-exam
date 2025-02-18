#include <unistd.h>

int main(int ac , char **av)
{
    if(ac == 2)
    {
        char *str = av[1];
        int i = 0;
        while(str[i] == ' ' || str[i] == '\t')
            i++;
        while(str[i])
        {
        if(str[i] == ' ' || str[i] == '\t')
        {
            while(str[i] == ' ' || str[i] == '\t')
                i++;
            if(str[i])
            {
                write(1," ",1);
            }
        }
        else 
        {
        write(1,&str[i],1);
        i++;
        }
        }
    }
    write(1,"\n",1);
    return 0 ;
}
