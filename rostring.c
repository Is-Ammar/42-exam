/*Assignment name  : rostring
Expected files   : rostring.c
Allowed functions: write, malloc, free
--------------------------------------------------------------------------------

Write a program that takes a string and displays this string after rotating it
one word to the left.

Thus, the first word becomes the last, and others stay in the same order.

A "word" is defined as a part of a string delimited either by spaces/tabs, or
by the start/end of the string.

Words will be separated by only one space in the output.

If there's less than one argument, the program displays \n.

Example:

$>./rostring "abc   " | cat -e
abc$
$>
$>./rostring "Que la      lumiere soit et la lumiere fut"
la lumiere soit et la lumiere fut Que
$>
$>./rostring "     AkjhZ zLKIJz , 23y"
zLKIJz , 23y AkjhZ
$>
$>./rostring "first" "2" "11000000"
first
$>
$>./rostring | cat -e
$
$>*/

#include <unistd.h>

void print_first_word(char *start, char *end)
{
  while(start < end)
  {
    write(1, start, 1);
    start++;
  }
}

int main(int ac, char **av)
{
  char *str;
  char *first_word;
  char *last_word;
  str = av[1];
  if(ac > 1)
  {
    while(*str && *str == ' ' || *str == '\t')
      str++;
    first_word = str;
    while(*str && *str != ' ' && *str != '\t')
      str++;
    last_word = str;
    while(*str == ' ' || *str == '\t')
      str++;
    if(*str)
    {
      while(*str)
      {
        if(*str == ' ' || *str == '\t')
        {
          while(*str == ' ' || *str == '\t')
          str++;
          if(*str)
            write(1, " ", 1);
        }
        else 
        {
          write(1, str, 1);
          str++;
        }
      }
      write(1, " ", 1);
    }
    print_first_word(first_word, last_word);
  }else
  {
    write(1, "\n", 1);
  }
  write(1, "\n", 1);
}
