#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Duplicate a string in memory.
 * @str: The string to duplicate.
 *
 * Return: A pointer to the newly allocated duplicate string.
 *         NULL if memory allocation fails or if str is NULL.
 */
char *_strdup(char *str)
{
	char *duplicate;
	int length = 0, i;

	if (str == NULL)
		return (NULL);

	while (str[length] != '\0')
		length++;

	duplicate = (char *)malloc(sizeof(char) * (length + 1));

	if (duplicate == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
		duplicate[i] = str[i];

	duplicate[i] = '\0';

	return (duplicate);
}
