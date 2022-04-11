#include "main.h"

/**
 * array_range - creates an array of ordered integers from range min-max
 * @min: minimum value in array
 * @max: maximum value in array
 * Return: pointer to array of integers
 */
int *array_range(int min, int max)
{
	int *arr, range, i, j = 0;

	if (min > max)
		return (NULL);

	range = (max - min) + 1;
	arr = malloc(sizeof(*arr) * range);

	if (arr == NULL)
		return (NULL);

	i = min;
	while (j < range)
	{
		arr[j] = i;
		i++;
		j++;
	}

	return (arr);
	free(arr);
}
