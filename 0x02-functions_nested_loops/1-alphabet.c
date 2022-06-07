#include <stdio.h>
#include "main.h"

/**
 * print_alphabet -entry point
 *
 * return:0 (success)
 */

void print_alphabet(void)
{
	char i = 'a';
	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}

	_putchar('\n')

}
