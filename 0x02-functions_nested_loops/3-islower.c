#include "main.h"

/**
 *_islower - checks for lowercase character
 * @C : single character check
 * Return : 1 if c is lowercase else 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
