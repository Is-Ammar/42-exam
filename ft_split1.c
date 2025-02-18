#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int is_delim(char c)
{
    return (c == ' ' || c == '\t');
}
int ft_count(char *s)
{
    int word = 1;
    int count = 0;
    while(*s)
    {
        if(word && !is_delim(*s))
        {
            count++;
            word = 0; 
        }
        else if(!word && is_delim(*s)) 
        {
            word = 1;
        }
        s++;
    }
    return count;
}

char    **ft_split(char *str)
{
    int len = ft_count(str);
    int i = 0;
    int j;
    char **result = malloc((len + 1) * sizeof(char *));
    if(!result)
        return NULL;
    while(*str)
    {
        while(*str && is_delim(*str))
            str++;
        char *start = str;
        while (*str && !is_delim(*str))
        {
            str++;
        }
        int w_len = str - start;
        result[i] = malloc((w_len + 1) * sizeof(char));
        j = 0;
        while (j < w_len)
        {
            result[i][j] = start[j];
            j++;
        }
        result[i][w_len] = '\0';
        i++;
    }
    result[i] = NULL;
    return result;
}
int    main(void)
{
    int        i;
    char    **words = ft_split("hi come  bocal");
    i = 0;
    while (words[i])
    {
        printf("%s\n", words[i]);
        free(words[i]);
        i++;
    }
    free(words);
    return (0);
}