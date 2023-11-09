#include "main.h"
#include <stdlib.h>

/**
 * create_array - function
 * @size: unsigned int
 * @c: char
 *
 * Return: char ptr
 */
char *create_array(unsigned int size, char c)
{
	char *array = NULL;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = (char *)malloc(size * sizeof(char));
	if (array != NULL)
	{
		for (i = 0; i < size; i++)
			array[i] = c;
	}

	return (array);
}
