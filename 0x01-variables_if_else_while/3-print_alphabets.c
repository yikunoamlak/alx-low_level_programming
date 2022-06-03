#include <stdio.h>
/**
 * main - Entry point
 * Description - prints the alphabet in lowercase, and then in uppercase
 * Return: returns always (0)
 */

int main(void)
{
  
  char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	c = 'A';

	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}
  
  putchar('\n');
  
  return (0);
  
}
