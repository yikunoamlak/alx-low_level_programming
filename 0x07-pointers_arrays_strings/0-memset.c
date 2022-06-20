#include "main.h"
/*
 * _memset - fills memory
 *@n: bytes of memory
 *@s: pointer to constant
 *@b: constant byte
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	for (unsigned int a = 0; n > 0 ; a++, n--)
	{
		s[a] = b;
	}

	return (s);
}
