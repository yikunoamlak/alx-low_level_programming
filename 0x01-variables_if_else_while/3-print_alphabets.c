#include <stdio.h>
/**
 * main - Entry point
 * Description - prints the alphabet in lowercase, and then in uppercase
 * Return: returns always (0)
 */

int main(void)
{
  
  char b;
  

  
  for (b = 'a'; b <= 'z'; b++)
    
    if (b != 'q' && b != 'e')
      
      putchar(b);
  
  putchar('\n');
  
  return (0);
  
}
