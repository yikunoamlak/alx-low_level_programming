#include "main.h"

/**
 * main - entry point
 * descrption - writes _putchar followed by new line
 *
 * return -always 0 (success)
 */

int main(void)
{
	char c[10] = "_putchar";
	int i = 0;
	while (i<9)
	{
		_putchar(c[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
}
