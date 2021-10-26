#include "sort.h"
/**
 * bubble_sort - implements the bubble sort algorithm
 *
 * @array: unsorted array
 * @size: size of array in [int]
 * Return: None
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int swapped; /* 1 -> true, 0 -> false */

	if (size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		swapped = 0;
		for (j = 0; j < (size - i - 1); j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				swapped = 1;
			}
			print_array(array, size);
		}

		if (swapped == 0)
			break;
	}
}

/**
 * swap - swaps two integers adjacent of each other in an array
 *
 * @x: pointer integer to the left
 * @y: pointer integer to the right
 */
void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}
