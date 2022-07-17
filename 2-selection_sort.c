#include "sort.h"
/**
 * swap - swap position of the elements passed
 *
 * @x: pointer the element one
 * @y: pointer the element two
 */

void swap(int *x, int *y)
{
	int tmp;

	tmp = *x;
	*x = *y;
	*y = tmp;
}

/**
 * selection_sort - sorts an array of elements
 *
 * @array: array of elements
 * @size: number of elements in the array
 *
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, j_min;

	if (size >= 2)
	{
		for (i = 0; i < size - 1; i++)
		{
			j_min = i;
			for (j = i + 1; j < size; j++)
			{
				if (array[j] < array[j_min])
					j_min = j;
			}
			if (j_min != i)
			{
				swap(&array[i], &array[j_min]);
				print_array(array, size);
			}
		}
	}
}
