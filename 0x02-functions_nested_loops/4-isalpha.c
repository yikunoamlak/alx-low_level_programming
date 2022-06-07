#include "main.h"
/**
 * _isalpha - check for alphabetic character
 * @c : character to check the case
 * Return:0 or 1
 */

int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
		return (1);
	else
		return (0);

}

