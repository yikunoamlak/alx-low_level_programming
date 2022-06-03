#include <stdio.h>
#include <stdlib.h>

/**
 * main - main entry
 * Description: prints all the numbers of base 16 in lowercase
 * Return: 0
 */
int main(void)
{
  char b = '0';
  while (b <= '9')
    {
      putchar(b);
      b++;
    }
  char c = 'a';
  while (c <= 'f')
    {
      putchar(c);
      c++;
    }
  putchar('\n');
  return(0);
    }

