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
 * selection_sort - sorts an array of elements
 * @array - array of elements
 * @size: Number of elements in @array
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
    			{
    			    j_min = j;
    			}
    		}
    		if (j_min != i)
            {
            swap_func(&array[i], &array[j_min]);
            print_array(array, size);
            }
    	}
    }
}
