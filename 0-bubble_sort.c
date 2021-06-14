#include "sort.h"

/**
 *  bubble_sort - function that sorts an array of integers
 *  in ascending order using the Bubble sort algorithm
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */

void bubble_sort(int *array, size_t size)
{
	size_t c, d, temp;

	if (size < 2 || !array)
		return;


	for (c = 0 ; c < size - 1; c++)
	{
		for (d = 0 ; d < size - c - 1; d++)
		{
			if (array[d] > array[d + 1])
			{
				temp       = array[d];
				array[d]   = array[d + 1];
				array[d + 1] = temp;
				print_array(array, size);
			}
		}
	}

}
