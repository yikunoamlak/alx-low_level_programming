#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main- main entry
 * Description - prints all the numbers of base 16 in lowercase
 * Return : always return (0)
 */

int main(void)
{
	char b = 'z';

	while (b >= 'a')
	{
		putchar(b);
		b--;
	}

	putchar('\n');
	return (0);
}
