#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * _sqrt_recursion - Calcule la racine carrée d'un nombre de en récursive.
 * @n: Le nombre pour lequel la racine carrée doit être calculée.
 * @guess: Estimation de la racine carrée.
 * Return: La racine carrée de n, ou -1 n'a pas de racine carrée naturelle.
 */

int calculate_sqrt(int n, int guess);
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	return (calculate_sqrt(n, 1));
}

/**
 * calculate_sqrt - Calcule la racine carrée d'un nombre de en récursive.
 * @n: Le nombre pour lequel la racine carrée doit être calculée.
 * @guess: Estimation de la racine carrée.
 *
 * Return: La racine carrée de n, ou -1 n'a pas de racine carrée naturelle.
 */

int calculate_sqrt(int n, int guess)
{
	if (guess * guess == n)
	{
		return (guess);
	}
	if (guess * guess > n)
	{
		return (-1);
	}
	return (calculate_sqrt(n, guess + 1));
}
