#include "sort.h"
/**
 * swap - waps two values
 * @x: first value
 * @y: second value
 * Return: Nothing
 */
void swap(int *x, int *y)
{
	int temp;

	temp = *x;
	*x = *y;
	*y = temp;
}

/**
 *  selection_sort - sorts an array of integers in ascending order
 *  using the Selection sort algorithm
 * @array: The array to be printed
 * @size: Number of elements in @array
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, minimum;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		minimum = i;
		for (j = i + 1; j < size; j++)
			if (array[j] < array[minimum])
				minimum = j;

		swap(&array[minimum], &array[i]);
		if (array[minimum] != array[i])
			print_array(array, size);
	}
}
