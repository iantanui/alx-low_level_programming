#include "function_pointers.h"

/**
 * array_iterator - executes function given as parameter on each array element
 * @array: array to iterate over
 * @size: array size
 * @action: pointer to function
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array == NULL || (*action) == NULL)
		exit(98);

	for (i = 0; i < size; i++)
		(*action)(*(array + i));
}
