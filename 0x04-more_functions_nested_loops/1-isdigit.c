#include "main.h"

/**
 * main - _isdigit
 * Description - checks for a digit
 *
 * Return: returns 1 if c is a digit else 0
 */

int _isdigit(int c);
{
	if (c <= 48 && c >= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
