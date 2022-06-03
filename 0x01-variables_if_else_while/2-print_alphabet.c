#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: Get a random number and check its last digit, compare it with 5 
 * Return: always (0)
 */
int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}

	putchar('\n');
	return (0);
}
