#include <stdio.h>

void sort_int_tab(int *tab, unsigned int size)
{
    int i = 0;
    while(i < size - 1)
    {
        if(tab[i] > tab[i + 1])
        {
            int temp = tab[i];
            tab[i] = tab[i + 1];
            tab[i + 1] = temp;
            i = 0;
        }else 
            i++;
    }
}
