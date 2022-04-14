#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array to search
 * @size: array size
 * @cmp: pointer to function
 * Return: index of first element found, otherwise -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, count = 0;

	if (array == NULL || (*cmp) == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if ((*cmp)(*(array + i)) == 1)
		{
			count = i;
			break;
		}
	}

	if (count == 0)
		return (-1);
	else
		return (count);
}
