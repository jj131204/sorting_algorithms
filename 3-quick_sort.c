#include "sort.h"
/**
 * swap - waps two values
 * @x: first value
 * @y: second value
 * Return: Nothing
 */
void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

/**
 * partition - divides the array in two parts
 * @array: array
 * @size: size of the array
 * @first: lower value
 * @last: higher value
 * Return: index
 */
int partition(int *array, size_t size, int first, int last)
{
	int pivot = array[last]; /*Pivot*/
	int i = (first - 1); /* Index of smaller element (right position of pivot)*/
	int j;

	for (j = first; j <= last - 1; j++)
	{
		/* If current element is smaller than the pivot*/
		if (array[j] < pivot)
		{
			i++; /*Increment index of smaller element*/
			swap(&array[i], &array[j]);
			if (i != j)
				print_array(array, size);
		}
	}
	swap(&array[last], &array[i + 1]);
	if ((i + 1) < j)
		print_array(array, size);

	return (i + 1);
}
/**
 * sort_func - sorts the array in asc order
 * @array: array
 * @size: size of the array
 * @first: lower value
 * @last: higher value
 * Return: Nothing
 */
void sort_func(int *array, size_t size, int first, int last)
{
	int part_index;

	if (first < last)
	{
		/*part_index is partitioning index*/
		part_index = partition(array, size, first, last);
		/*Separately sort elements before and after partition*/
		sort_func(array, size, first, part_index - 1);
		sort_func(array, size, part_index + 1, last);
	}
}

/**
 * quick_sort - quick sort main
 * @array: array
 * @size: size of the array
 * Return: Nothing
 */
void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;

	sort_func(array, size, 0, size - 1);
}
