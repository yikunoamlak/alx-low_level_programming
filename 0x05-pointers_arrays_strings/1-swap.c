#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the value of integers
 * @a and @b: integers
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
