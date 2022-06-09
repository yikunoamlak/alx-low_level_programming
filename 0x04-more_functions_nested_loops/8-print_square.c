#include "main.h"

/*
 * print_square - prints a square
 * Return: always 0
 */
void print_square(int size)
{
	int i = 0, ii;

	while (i < n && n > 0)
	{
		ii = 0;
		while (ii < n)
		{
			_putchar('#');
			ii++;
		}

		_putchar('\');
		i++;
	}
	if (i == 0)
		_putchar('\n');
}
