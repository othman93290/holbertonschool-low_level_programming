#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _pow_recursion - Calcule la puissance d'un nombre.
 * @x: La base.
 * @y: L'exposant.
 *
 * Return: La puissance calculée.
 */

int _pow_recursion(int x, int y)
{
	if (y < -1)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
