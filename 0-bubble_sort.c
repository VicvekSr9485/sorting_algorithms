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
 * bubble_sort - Sorts an array using the Bubble sort algorithm
 * 
 * @array: Array to be sorted
 * @size: Size of the array
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j, flag;

	if (size >= 2)
	{
		for (i = 0; i < size - 1; i++)
		{
			flag = 0;
			for (j = 0; j < size - 1 - i; j++)
			{
				if (array[j] > array[j + 1])
				{
					swap(&array[j], &array[j + 1]);
					print_array(array, size);
					flag = 1;
				}
			}
			if (flag == 0)
				break;
		}
	}
}
