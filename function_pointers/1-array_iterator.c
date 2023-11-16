#include <stdlib.h>
#include "fonction_pointeurs.h"

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t	x;

	if (array == 0)
		return;
	if (size == 0)
		return;
	if (action == 0)
		return;
	for (x = 0; x < size; x++)
		action(array[x]);
}
