#include <stdlib.h>
#include <stdio.h>
/**
 * main - main entry
 * Description: Get a random number and check its last digit
 * Return: always (0)
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
