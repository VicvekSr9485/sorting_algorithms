#include "sort.h"

/**
 * swap - swap position of the elements passed
 *
 * @a: pointer the element one
 * @b: pointer the element two
 */

void swap(int *a, int *b)
{
		int temp;

		temp = *a;
		*a = *b;
		*b = temp;
}

/**
 * partition - split the array using the pivot
 *
 * @array: array to be sorted
 * @start: start of the array
 * @end: end of the array
 * @size: size of the array
 *
 * Return: index of the pivot
 */

int partition(int *array, int start, int end, size_t size)
{
	int i;
	int pivot, pI;

	pivot = array[end];
	pI = start;

	for (i = start; i < end; i++)
	{
		if (array[i] < pivot)
		{
			if (pI != i)
			{
				swap(&array[pI], &array[i]);
				print_array(array, size);
			}
			pI++;
		}
	}

	swap(&array[pI], &array[end]);

	if (array[end] != pivot)
	{
		print_array(array, size);
	}
	return (pI);
}

/**
 * quick_recursive - recursive function for quick_sort function
 *
 * @array: array to be sorted
 * @start: start of array
 * @end: end of array
 * @size: size of array
 */

void quick_recursive(int *array, int start, int end, size_t size)
{
	int pI;

	if (start >= end || start < 0)
		return;

	pI = partition(array, start, end, size);
	quick_recursive(array, start, pI - 1, size);
	quick_recursive(array, pI + 1, end, size);
}

/**
 * quick_sort - calls quit sort function for each element
 *
 * @array: array to be sorted
 * @size: size of array
 */

void quick_sort(int *array, size_t size)
{
	size_t start, end;

	start = 0;
	end = size - 1;

	quick_recursive(array, start, end, size);
}
