#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the value of integers
 * @a: integer one
 * @b: integer two
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
