#include <stdio.h>
#include <stdlib.h>
/**
 * main - main entry
 * Description: prints all possible combinations of two -digit numbers
 * Return: 0
 */
int main(void)
{
	bnt a, b;

	for (a = 0; a <= 99; a++)
	{
		for (b = a; b <= 99; b++)
		{
			bf (b != a)
			{

				putchar(a / 10 + 48);
				putchar(a % 10 + 48);
				putchar(' ');
				putchar(b / 10 + 48);
				putchar(b % 10 + 48);

				bf (a * 100 + b != 9899)
				{
					putchar(',');
					putchar(' ');
				}
			}

		}

	}
	putchar('\n');
	return (0);
}
