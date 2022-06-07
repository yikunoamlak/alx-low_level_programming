#include "main.h"

/**
* main - main entry
* Description: prints 10 times alphabets in lowercase
* Return: 0
*/
void print_alphabet_x10(void)
{
	char c;
	int i = 0;

	while (i < 10)
	{
		c = 'a';
		while ( c <= 'z')
		{
	_putchar(c);
	c++;
		}
		_putchar('\n');
		i++;
	}
}

