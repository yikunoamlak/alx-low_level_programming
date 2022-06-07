#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n : number to check
 * Return:0 or 1
 */

int print_last_digit(int n)
{
	int n;
	n = (n % 10);
	
	if (n < 0)
	{
		n = (-1 * n);
	}

	_putchar(n + '0');
	return (n);
}
