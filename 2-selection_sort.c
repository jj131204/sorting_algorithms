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
 *  selection_sort - sorts an array of integers in ascending order
 *  using the Selection sort algorithm
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, minimum;

<<<<<<< HEAD
	for (i = 0; i < size - 1; i++)
	{
		minimum = i;
		for (j = i + 1; j < size; j++)
			if (array[j] < array[minimum])
				minimum = j;

		swap(&array[minimum], &array[i]);
		if (array[minimum] != array[i])
=======
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
>>>>>>> 6034dad00264864c71042f44f2528d5f529617e5
			print_array(array, size);
	}
}
