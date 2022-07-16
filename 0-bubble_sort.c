#include "sort.h"

/**
* swap_func - a function to swap array elements
* @a: the array to swap
* @b: the array to be swapped
*/

void swap_func(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
* bubble_sort - function that sorts an array of integers in ascending order
* using the Bubble sort algorithm
*
* @array : the array to be sorted
* @size : the size of the array
*
* returns: success 0
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
					swap_func(&array[j], &array[j + 1]);
					print_array(array, size);
					flag = 1;
				}
			}
			if (flag == 0)
				break;
		}
	}

}
