#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * reverse_array - a function that reverse an array
 * @a: input integer
 * @n: input integer
 * Return: void
*/

void reverse_array(int *a, int n)
{
	int temp;
	int i;

for (i = 0; i < n / 2; i++)
{
	temp = a[i];
	a[i] = a[n - i - 1];
	a[n - i - 1] = temp;
}
}
