#include <stdio.h>
#include "main.h"
#include <time.h>
/**
 * jack_bauer - check if c is jack_bauer*
 * @a, b, c, d: The ASCII value of the character to be checked.
 * Description: check if c is print_sign*
 * Return: 1 if print_sign or 0 if uppercase
 */
void jack_bauer(void)
{
	int a, b, c, d;

	for (a = 0; a <= 2; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			for (c = 0; c <= 5; c++)
			{
				for (d = 0; d <= 9; d++)
				{
					if ((a <= 2 && (a < 2 || b <= 3)) && c <= 5)
					{
						_putchar(a + '0');
						_putchar(b + '0');
						_putchar(':');
						_putchar(c + '0');
						_putchar(d + '0');
						_putchar('\n');
					}
				}
			}
		}
	}
}
