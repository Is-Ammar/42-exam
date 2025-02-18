#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int find_gcd(int a, int b)
{
    while(b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main(int ac, char **av)
{
    if(ac != 3)
    {
        write(1, "\n", 1);
        return (0);
    }
    int num1 = atoi(av[1]);
    int num2 = atoi(av[2]);
    if(num2 > 0 && num1 > 0) 
    {
        int gcd = find_gcd(num1, num2);
        printf("%d\n", gcd);
    }else 
    {
        printf("\n");
    }
    return 0;
}
