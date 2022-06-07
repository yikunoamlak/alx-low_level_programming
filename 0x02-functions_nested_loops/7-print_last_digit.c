#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n : number to check
 * Return:0 or 1
 */

int print_last_digit(int n)
{
	int r;
	r = (r % 10);
	
	if (r < 0)
	{
		r = (-1 * r);
	}

	_putchar(r + '0');
	return (r);
}
