#include "my_putchar.c"
#include <unistd.h>

void my_putstr(char *str) 
{
  int i = 0;
  while (str[i] != '\0')
  {
    my_putchar(str[i]);
    i++;
  }
}