/*Assignment name  : ft_split
Expected files   : ft_split.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write a function that takes a string, splits it into words, and returns them as
a NULL-terminated array of strings.

A "word" is defined as a part of a string delimited either by spaces/tabs/new
lines, or by the start/end of the string.

Your function must be declared as follows:

char    **ft_split(char *str);*/

#include <stdlib.h>
#include <stdio.h>

static int is_delim(char c)
{
    return (c == ' ' || c == '\t' || c == '\n');
}
char **ft_split(char *str)
{
    int i = 0;
    char **res = malloc(10000);
    if (!res)
        return NULL;
    while (*str)
    {
        while (*str && is_delim(*str))
            str++;
        if (*str)
        {
            char *start = str;
            while (*str && !is_delim(*str))
                str++;
            int len = str - start;
            res[i] = malloc(len + 1);
            if (!res[i])
                return NULL;
            int j = 0;
            while (j < len)
            {
                res[i][j] = start[j];
                j++;
            }
            res[i][j] = '\0';
            i++;
        }
    }
    res[i] = NULL;
    return res;
}

#include <stdio.h>
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