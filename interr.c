#include <unistd.h>

int main(int ac, char **av)
{
    if (ac == 3)
    {
        char *str = av[1];
        char *s2 = av[2];
        char see[256] = {0};
        int i = 0;

        while (str[i])
        {
           int j = 0;
            while (s2[j])
            {
                if (str[i] == s2[j])
                {
                    if (see[(unsigned char)str[i]] == 0)
                    {
                        write(1, &str[i], 1);
                        see[(unsigned char)str[i]] = '1'; 
                    }
                }
                j++;
            }
            i++;
        }
    }
    write(1, "\n", 1);
    return 0;
}
