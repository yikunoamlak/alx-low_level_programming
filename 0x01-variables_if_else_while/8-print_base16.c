#include <stdio.h>
#include <stdlib.h>

/**
 * main - main entry
 * Description: prints all the numbers of base 16 in lowercase
 * Return: 0
 */
int main (void)
{
  char c= '0';

  while (c <='9')
    {
      putchar (c);
      c++;
    }
  
  putchar('\n');
  return (0);
    
}
