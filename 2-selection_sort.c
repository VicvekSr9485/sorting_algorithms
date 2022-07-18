#include "sort.h"
/**
 * swap - swap position of the elements passed
 *
 * @a: pointer the element one
 * @b: pointer the element two
 */

void swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
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
