#include "sort.h"

/**
 *  selection_sort - sorts an array of integers in ascending order
 *  using the Selection sort algorithm
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, swap, count, j1;
	int arr;

	if (!array || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		j1 = i;
		arr = array[i];
		for (j = i; j < size; j++)
		{
			if (arr > array[j])
			{
				count = 1;
				j1 = j;
				arr = array[j];
			}
		}
		if (count == 1)
		{
			swap = array[i];
			array[i] = arr;
			array[j1] = swap;
			print_array(array, size);
		}
	}
}
